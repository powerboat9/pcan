#!/usr/bin/python

keywords = [
"auto", "double", "int", "struct",
"break", "else", "long", "switch",
"case", "enum", "register", "typedef",
"char", "extern", "return", "union",
"const", "float", "short", "unsigned",
"continue", "for", "signed", "void",
"default", "goto", "sizeof", "volatile",
"do", "if", "static", "while"
]

def print_case(indent, ch):
    print("{}case '{}':".format(indent, ch))

def print_case_range(indent, ch1, ch2):
    if ch1 == ch2:
        print_case(indent, ch1)
    else:
        print("{}case '{}' ... '{}':".format(indent, ch1, ch2))

def gen_jmps(indent, prefix, words):
    print_case(indent, "_")
    if prefix == "":
        # allows for detecting wide string literals in token_taker.c
        print_case_range(indent, "A", "K")
        print_case_range(indent, "M", "Z")
    else:
        # numbers can be in identifiers, but not at the start of them
        print_case_range(indent, "0", "9")
        print_case_range(indent, "A", "Z")
    # collect data
    has_root = False
    letter_bins = {}
    for w in words:
        if w == "":
            has_root = True
        elif w[0] in letter_bins:
            letter_bins[w[0]].append(w[1:])
        else:
            letter_bins[w[0]] = [w[1:]]
    # check identifier characters that don't lead to key match
    start_case = None
    end_case = None
    for l in "abcdefghijklmnopqrstuvwxyz":
        if l in letter_bins:
            if start_case != None:
                print_case_range(indent, start_case, end_case)
                start_case = None
                end_case = None
        else:
            if start_case == None:
                start_case = l
            end_case = l
    if start_case != None:
        print_case_range(indent, start_case, end_case)
    print("{}    memcpy(ident, \"{}\", {}); ident_pos = {}; goto ident_r_is_valid;".format(indent, prefix, len(prefix), len(prefix)))
    # check for possible keyword maps
    for l in "abcdefghijklmnopqrstuvwxyz":
        if l in letter_bins:
            print("{}case '{}': switch ((r = getc(stream))) {{".format(indent, l))
            gen_jmps(indent + "    ", prefix + l, letter_bins[l])
            print("{}}}".format(indent))
    # generate default if not at start
    if prefix != "":
        if has_root:
            print("{}default: ungetc(r, stream); tk_out->tk_id = TK_K_{}; return 0;".format(indent, prefix.upper()))
        else:
            print("{}default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, \"{}\", {}); return 0;".format(indent, prefix, len(prefix) + 1))

gen_jmps("        ", "", keywords)
