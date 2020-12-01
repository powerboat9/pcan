#include "tgen.h"

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
        case TOK_IDENT: return "TOK_IDENT";
        case TOK_NUM: return "TOK_NUM";
        case TOK_OPAR: return "TOK_OPAR";
        case TOK_CPAR: return "TOK_CPAR";
        case TOK_COMMA: return "TOK_COMMA";
        case TOK_OCBRA: return "TOK_OCBRA";
        case TOK_CCBRA: return "TOK_CCBRA";
        case TOK_VOID: return "TOK_VOID";
        case TOK_U8: return "TOK_U8";
        case TOK_I8: return "TOK_I8";
        case TOK_U16: return "TOK_U16";
        case TOK_I16: return "TOK_I16";
        case TOK_U32: return "TOK_U32";
        case TOK_I32: return "TOK_I32";
        case TOK_U64: return "TOK_U64";
        case TOK_I64: return "TOK_I64";
        case TOK_PLUS: return "TOK_PLUS";
        case TOK_MINUS: return "TOK_MINUS";
    }
    return "[INVAL]";
}

int accept_token(char **s, struct token_data &tout) {
    switch ((*s)[0]) {
        case '(':
            *s += 1;
            *tout = {.tid = TOK_OPAR, };            return TOK_OPAR;
        case ')':
            *s += 1;
            *tout = {.tid = TOK_CPAR, };            return TOK_CPAR;
        case ',':
            *s += 1;
            *tout = {.tid = TOK_COMMA, };            return TOK_COMMA;
        case '{':
            *s += 1;
            *tout = {.tid = TOK_OCBRA, };            return TOK_OCBRA;
        case '}':
            *s += 1;
            *tout = {.tid = TOK_CCBRA, };            return TOK_CCBRA;
        case 'v':
            switch ((*s)[1]) {
                case 'o':
                    switch ((*s)[2]) {
                        case 'i':
                            switch ((*s)[3]) {
                                case 'd':
                                    *s += 4;
                                    *tout = {.tid = TOK_VOID, };                                    return TOK_VOID;
                            }
                            break;
                    }
                    break;
            }
            break;
        case '_':
            switch ((*s)[1]) {
                case '_':
                    switch ((*s)[2]) {
                        case 'u':
                            switch ((*s)[3]) {
                                case '8':
                                    switch ((*s)[4]) {
                                        case '_':
                                            switch ((*s)[5]) {
                                                case 't':
                                                    *s += 6;
                                                    *tout = {.tid = TOK_U8, };                                                    return TOK_U8;
                                            }
                                            break;
                                    }
                                    break;
                                case '1':
                                    switch ((*s)[4]) {
                                        case '6':
                                            switch ((*s)[5]) {
                                                case '_':
                                                    switch ((*s)[6]) {
                                                        case 't':
                                                            *s += 7;
                                                            *tout = {.tid = TOK_U16, };                                                            return TOK_U16;
                                                    }
                                                    break;
                                            }
                                            break;
                                    }
                                    break;
                                case '3':
                                    switch ((*s)[4]) {
                                        case '2':
                                            switch ((*s)[5]) {
                                                case '_':
                                                    switch ((*s)[6]) {
                                                        case 't':
                                                            *s += 7;
                                                            *tout = {.tid = TOK_U32, };                                                            return TOK_U32;
                                                    }
                                                    break;
                                            }
                                            break;
                                    }
                                    break;
                                case '6':
                                    switch ((*s)[4]) {
                                        case '4':
                                            switch ((*s)[5]) {
                                                case '_':
                                                    switch ((*s)[6]) {
                                                        case 't':
                                                            *s += 7;
                                                            *tout = {.tid = TOK_U64, };                                                            return TOK_U64;
                                                    }
                                                    break;
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                        case 'i':
                            switch ((*s)[3]) {
                                case '8':
                                    switch ((*s)[4]) {
                                        case '_':
                                            switch ((*s)[5]) {
                                                case 't':
                                                    *s += 6;
                                                    *tout = {.tid = TOK_I8, };                                                    return TOK_I8;
                                            }
                                            break;
                                    }
                                    break;
                                case '1':
                                    switch ((*s)[4]) {
                                        case '6':
                                            switch ((*s)[5]) {
                                                case '_':
                                                    switch ((*s)[6]) {
                                                        case 't':
                                                            *s += 7;
                                                            *tout = {.tid = TOK_I16, };                                                            return TOK_I16;
                                                    }
                                                    break;
                                            }
                                            break;
                                    }
                                    break;
                                case '3':
                                    switch ((*s)[4]) {
                                        case '2':
                                            switch ((*s)[5]) {
                                                case '_':
                                                    switch ((*s)[6]) {
                                                        case 't':
                                                            *s += 7;
                                                            *tout = {.tid = TOK_I32, };                                                            return TOK_I32;
                                                    }
                                                    break;
                                            }
                                            break;
                                    }
                                    break;
                                case '6':
                                    switch ((*s)[4]) {
                                        case '4':
                                            switch ((*s)[5]) {
                                                case '_':
                                                    switch ((*s)[6]) {
                                                        case 't':
                                                            *s += 7;
                                                            *tout = {.tid = TOK_I64, };                                                            return TOK_I64;
                                                    }
                                                    break;
                                            }
                                            break;
                                    }
                                    break;
                            }
                            break;
                    }
                    break;
            }
            break;
        case '+':
            *s += 1;
            *tout = {.tid = TOK_PLUS, };            return TOK_PLUS;
        case '-':
            *s += 1;
            *tout = {.tid = TOK_MINUS, };            return TOK_MINUS;
        case '\t':
        case '\n':
        case ' ':
            (*s)++;
            return accept_token(s, tout);
    }
    int hook_success;
    hook_success = _hook_tok_ident(s, vout);
    if (hook_success) return TOK_IDENT;
    hook_success = _hook_tok_num(s, vout);
    if (hook_success) return TOK_NUM;
    return -1;
}
