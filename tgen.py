#!/usr/bin/python

val_str = 0
val_num = 1

data = [
    ["TOK_IDENT", None, val_str],
    ["TOK_NUM", None, val_num],
    ["TOK_OPAR", "(", None],
    ["TOK_CPAR", ")", None],
    ["TOK_COMMA", ",", None],
    ["TOK_OCBRA", "{", None],
    ["TOK_CCBRA", "}", None],
    ["TOK_VOID", "void", None],
    ["TOK_U8", "__u8_t", None],
    ["TOK_I8", "__i8_t", None],
    ["TOK_U16", "__u16_t", None],
    ["TOK_I16", "__i16_t", None],
    ["TOK_U32", "__u32_t", None],
    ["TOK_I32", "__i32_t", None],
    ["TOK_U64", "__u64_t", None],
    ["TOK_I64", "__i64_t", None],
    ["TOK_PLUS", "+", None],
    ["TOK_MINUS", "-", None]
]

fh = open("tgen.h", "w")
i = 0
for tok_pair in data:
    fh.write("#define {} {}\n".format(tok_pair[0], str(i)))
    i += 1
fh.write("""
struct token_data {
    int t_id;
    union {
        char *s;
        unsigned long n;
    };
}

int pull_token(char **s, int);
int accept_token(char **s, int *vout);
char *token_to_str(int t);
""")
fh.close()

root_tree = [{}, None]
to_hook = []

def add_to_tree(t, s, n):
    if len(s) == 0:
        t[1] = n
    else:
        if not (s[0:1] in t[0]):
            t[0][s[0:1]] = [{}, None]
        add_to_tree(t[0][s[0:1]], s[1:], n)

for tok_pair in data:
    if tok_pair[1] == None:
        to_hook.append(tok_pair[0])
    else:
        add_to_tree(root_tree, tok_pair[1], tok_pair[0])

fc = open("tgen.c", "w")
fc.write("""#include "tgen.h"

static int _hook_tok_ident(char **s, int *vout) {
    switch (**s) {
        case 'A' ... 'Z':
        case 'a' ... 'z':
        case '_':
            break;
        default:
            return 0;
    }
    int acc = *((*s)++);
    while (1) {
        switch (**s) {
            case 'A' ... 'Z':
            case 'a' ... 'z':
            case '0' ... '9':
            case '_':
                acc = ((acc << 5) - acc) ^ *((*s)++);
                break;
            default:
                *vout = acc;
                return 1;
        }
    }
}

static int _hook_tok_num(char **s, int *vout) {
    switch (**s) {
        case '1' ... '9':
            break;
        default:
            return 0;
    }
    int acc = *((*s)++) - '0';
    while (1) {
        switch (**s) {
            case '0' ... '9':
                acc *= 10;
                acc += *((*s)++) - '0';
                break;
            default:
                *vout = acc;
                return 1;
        }
    }
}

char *token_to_str(int t) {
    switch (t) {
""")

for tok_pair in data:
    fc.write("        case " + tok_pair[0] + ": return \"" + tok_pair[0] + "\";\n")

fc.write("""    }
    return "[INVAL]";
}

int accept_token(char **s, struct token_data &tout) {
""")

def write_tree(indent, t, n):
    if len(t[0]) != 0:
        fc.write(indent + "switch ((*s)[" + str(n) + "]) {\n")
        for tk in t[0]:
            ch = tk
            if ch == "'":
                ch = "\\'"
            fc.write(indent + "    case '" + ch + "':\n")
            write_tree(indent + "        ", t[0][tk], n + 1)
        if n != 0:
            fc.write(indent + "}\n")
    if n == 0:
        fc.write(indent + "    case '\\t':\n")
        fc.write(indent + "    case '\\n':\n")
        fc.write(indent + "    case ' ':\n")
        fc.write(indent + "        (*s)++;\n")
        fc.write(indent + "        return accept_token(s, tout);\n")
        fc.write(indent + "}\n")
    if t[1] != None:
        fc.write(indent + "*s += " + str(n) + ";\n")
        fc.write(indent + "*tout = {.tid = " + t[1] + ", };")
        fc.write(indent + "return " + t[1] + ";\n")
    elif n != 0:
        fc.write(indent + "break;\n")

write_tree("    ", root_tree, 0)
fc.write("    int hook_success;\n")
for hook in to_hook:
    fc.write("    hook_success = _hook_" + hook.lower() + "(s, vout);\n")
    fc.write("    if (hook_success) return " + hook + ";\n")
fc.write("    return -1;\n}\n")
fc.close()
