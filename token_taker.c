#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "tokens.h"
#include "token_taker.h"

int take_token(FILE *stream, struct token_data *tk_out) {
    int r;
    char ident[MAX_IDENT_SIZE];
    int ident_pos = 0;
    switch ((r = getc(stream))) {
        case EOF: return TT_EOF;
        // check for wide string literal
        case 'L':
            if ((r = getc(stream)) == '"') {
                fprintf(stderr, "[ERROR] wide string unsupported\n");
                exit(-1);
            } else {
                ident[0] = 'L';
                ident_pos = 1;
                goto ident_absorb;
            }
        // use token_taker_gen.py to generate keyword matching + identifier cases - way simpler than 8 c macros cobbled together
#include "token_taker_gen.c"
        // simple non-keyword tokens - python -> c code generation is unneeded
#define RET(id) tk_out->tk_id = id; return 0;
        case ';': RET(TK_SEMICOLON)
        case '{': RET(TK_O_CBRAK)
        case '}': RET(TK_C_CBRAK)
        case ',': RET(TK_COMMA)
#define OP_EQ(a, ae) if ((r = getc(stream)) == '=') { RET(ae) } else { ungetc(r, stream); RET(a) }
        case '=': OP_EQ(TK_EQ, TK_EQEQ)
        case ':': RET(TK_COLON)
        case '(': RET(TK_O_PAREN)
        case ')': RET(TK_C_PAREN)
        case '[': RET(TK_O_BRAK)
        case ']': RET(TK_C_BRAK)
        case '*': OP_EQ(TK_STAR, TK_ASIGN_STAR)
        case '.':
            switch ((r = getc(stream))) {
                case '.':
                    switch ((r = getc(stream))) {
                        case '.': RET(TK_TRIP_DOT)
                        default:
                            fprintf(stderr, "[ERROR] double dots unsupported\n");
                            exit(-1);
                    }
                default: ungetc(r, stream); RET(TK_DOT)
            }
        case '?': RET(TK_QMARK)
        case '/': OP_EQ(TK_SLASH, TK_ASIGN_SLASH)
        case '%': OP_EQ(TK_MOD, TK_ASIGN_MOD)
        case '+':
            switch ((r = getc(stream))) {
                case '+': RET(TK_INC)
                case '=': RET(TK_ASIGN_PLUS)
                default: ungetc(r, stream); RET(TK_PLUS)
            }
        case '-':
            switch ((r = getc(stream))) {
                case '-': RET(TK_DEC)
                case '>': RET(TK_INDIR_AC)
                case '=': RET(TK_ASIGN_MINUS)
                default: ungetc(r, stream); RET(TK_MINUS)
            }
        case '<':
            switch ((r = getc(stream))) {
                case '<':
                    if ((r = getc(stream)) == '=') {
                        RET(TK_ASIGN_SHL)
                    } else {
                        ungetc(r, stream);
                        RET(TK_SHL)
                    }
                case '=': RET(TK_LTE)
                default: ungetc(r, stream); RET(TK_LT)
            }
        case '>':
            switch ((r = getc(stream))) {
                case '>':
                    if ((r = getc(stream)) == '=') {
                        RET(TK_ASIGN_SHR)
                    } else {
                        ungetc(r, stream);
                        RET(TK_SHR)
                    }
                case '=': RET(TK_GTE)
                default: ungetc(r, stream); RET(TK_GT)
            }
        case '&':
            switch ((r = getc(stream))) {
                case '&': RET(TK_LOGIC_AND)
                case '=': RET(TK_ASIGN_AND)
                default: ungetc(r, stream); RET(TK_AND)
            }
        case '^': OP_EQ(TK_XOR, TK_ASIGN_XOR)
        case '|':
            switch ((r = getc(stream))) {
                case '|': RET(TK_LOGIC_OR)
                case '=': RET(TK_ASIGN_OR)
                default: ungetc(r, stream); RET(TK_OR)
            }
        case '!': OP_EQ(TK_EXCLA, TK_NEQ)
        case '~': RET(TK_TILDA)
        // more complex tokens that aren't TK_IDENT
        case '1' ... '9':;
            unsigned long acc = r - '0';
            while (1) {
                switch ((r = getc(stream))) {
                    case '0' ... '9':
                        if (__builtin_umull_overflow(acc, (unsigned long) 10, &acc) ||
                            __builtin_uaddl_overflow(acc, (unsigned long) (r - '0'), &acc)) {
                            fprintf(stderr, "[ERROR] number literal too large\n");
                            exit(-1);
                        }
                        break;
                    case 'A' ... 'K':
                    case 'M' ... 'T':
                    case 'V' ... 'Z':
                    case 'a' ... 'k':
                    case 'm' ... 't':
                    case 'v' ... 'z':
                    case '_':
                        fprintf(stderr, "[ERROR] invalid number literal suffix\n");
                        exit(-1);
                    case 'U':
                    case 'u':
                        switch ((r = getc(stream))) {
                            case 'A' ... 'K':
                            case 'M' ... 'Z':
                            case 'a' ... 'k':
                            case 'm' ... 'z':
                            case '0' ... '9':
                            case '_':
                                fprintf(stderr, "[ERROR] invalid number literal suffix\n");
                                exit(-1);
                            case 'L':
                            case 'l':
                                switch ((r = getc(stream))) {
                                    case 'A' ... 'Z':
                                    case 'a' ... 'z':
                                    case '0' ... '9':
                                    case '_':
                                        fprintf(stderr, "[ERROR] invalid number literal suffix\n");
                                        exit(-1);
                                    default:
                                        tk_out->tk_id = TK_INT_CONST;
                                        tk_out->data.integer.n = acc;
                                        tk_out->data.integer.type = INT_TYPE_LUNSIGN;
                                        return 0;
                                }
                            default:
                                ungetc(r, stream);
                                tk_out->tk_id = TK_INT_CONST;
                                tk_out->data.integer.n = acc;
                                tk_out->data.integer.type = (acc > UINT_MAX) ? INT_TYPE_LUNSIGN : INT_TYPE_UNSIGN;
                                return 0;
                        }
                    case 'L':
                    case 'l':
                        switch ((r = getc(stream))) {
                            case 'A' ... 'Z':
                            case 'a' ... 'z':
                            case '0' ... '9':
                            case '_':
                                fprintf(stderr, "[ERROR] invalid number literal suffix\n");
                                exit(-1);
                            default:
                                ungetc(r, stream);
                                tk_out->tk_id = TK_INT_CONST;
                                tk_out->data.integer.n = acc;
                                tk_out->data.integer.type = (acc > LONG_MAX) ? INT_TYPE_LUNSIGN : INT_TYPE_LONG;
                                return 0;
                        }
                    default:
                        ungetc(r, stream);
                        tk_out->tk_id = TK_INT_CONST;
                        tk_out->data.integer.n = acc;
                        if (acc > LONG_MAX) {
                            tk_out->data.integer.type = INT_TYPE_LUNSIGN;
                        } else if (acc > INT_MAX) {
                            tk_out->data.integer.type = INT_TYPE_LONG;
                        } else {
                            tk_out->data.integer.type = INT_TYPE_NORM;
                        }
                        return 0;
                }
            }
        case '0':
            fprintf(stderr, "[ERROR] octal and hexidecimal number literals not supported yet\n");
            exit(-1);
        // handle strings
        case '"':
            fprintf(stderr, "[ERROR] string literals not supported yet\n");
            exit(-1);
        // handle character constants
        case '\'':
            fprintf(stderr, "[ERROR] character literals not supported yet\n");
            exit(-1);
        case '\t' ... '\f':
        case ' ':
            // ignore whitespace
            return take_token(stream, tk_out);
        default:
            fprintf(stderr, "[ERROR] invalid character\n");
            exit(-1);
    }
    __builtin_trap();
    ident_absorb:
    r = getc(stream);
    ident_with_r:
    switch (r) {
        case 'A' ... 'Z':
        case 'a' ... 'z':
        case '0' ... '9':
        case '_':
            ident_r_is_valid:
            ident[ident_pos++] = (char) r;
            if (ident_pos == MAX_IDENT_SIZE) {
                fprintf(stderr, "[ERROR] maximum identifier size is %d\n", (int) MAX_IDENT_SIZE);
                exit(-1);
            }
            goto ident_absorb;
        default:
            ungetc(r, stream);
        case EOF:
            tk_out->tk_id = TK_IDENT;
            memcpy(tk_out->data.ident, ident, ident_pos);
            tk_out->data.ident[ident_pos] = '\0';
            return 0;
    }
}
