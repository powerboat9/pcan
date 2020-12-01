        case '_':
        case 'A' ... 'K':
        case 'M' ... 'Z':
        case 'h':
        case 'j' ... 'k':
        case 'm' ... 'q':
        case 'x' ... 'z':
            memcpy(ident, "", 0); ident_pos = 0; goto ident_r_is_valid;
        case 'a': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 't':
            case 'v' ... 'z':
                memcpy(ident, "a", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'u': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 's':
                case 'u' ... 'z':
                    memcpy(ident, "au", 2); ident_pos = 2; goto ident_r_is_valid;
                case 't': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'n':
                    case 'p' ... 'z':
                        memcpy(ident, "aut", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'o': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'z':
                            memcpy(ident, "auto", 4); ident_pos = 4; goto ident_r_is_valid;
                        default: ungetc(r, stream); tk_out->tk_id = TK_K_AUTO; return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "aut", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "au", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "a", 2); return 0;
        }
        case 'b': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'q':
            case 's' ... 'z':
                memcpy(ident, "b", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'r': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'd':
                case 'f' ... 'z':
                    memcpy(ident, "br", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'e': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'b' ... 'z':
                        memcpy(ident, "bre", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'a': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'j':
                        case 'l' ... 'z':
                            memcpy(ident, "brea", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'k': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'z':
                                memcpy(ident, "break", 5); ident_pos = 5; goto ident_r_is_valid;
                            default: ungetc(r, stream); tk_out->tk_id = TK_K_BREAK; return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "brea", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "bre", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "br", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "b", 2); return 0;
        }
        case 'c': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'b' ... 'g':
            case 'i' ... 'n':
            case 'p' ... 'z':
                memcpy(ident, "c", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'a': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'r':
                case 't' ... 'z':
                    memcpy(ident, "ca", 2); ident_pos = 2; goto ident_r_is_valid;
                case 's': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'd':
                    case 'f' ... 'z':
                        memcpy(ident, "cas", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'e': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'z':
                            memcpy(ident, "case", 4); ident_pos = 4; goto ident_r_is_valid;
                        default: ungetc(r, stream); tk_out->tk_id = TK_K_CASE; return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "cas", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "ca", 3); return 0;
            }
            case 'h': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'b' ... 'z':
                    memcpy(ident, "ch", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'a': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'q':
                    case 's' ... 'z':
                        memcpy(ident, "cha", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'r': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'z':
                            memcpy(ident, "char", 4); ident_pos = 4; goto ident_r_is_valid;
                        default: ungetc(r, stream); tk_out->tk_id = TK_K_CHAR; return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "cha", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "ch", 3); return 0;
            }
            case 'o': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'm':
                case 'o' ... 'z':
                    memcpy(ident, "co", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'n': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'r':
                    case 'u' ... 'z':
                        memcpy(ident, "con", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 's': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 's':
                        case 'u' ... 'z':
                            memcpy(ident, "cons", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 't': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'z':
                                memcpy(ident, "const", 5); ident_pos = 5; goto ident_r_is_valid;
                            default: ungetc(r, stream); tk_out->tk_id = TK_K_CONST; return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "cons", 5); return 0;
                    }
                    case 't': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'h':
                        case 'j' ... 'z':
                            memcpy(ident, "cont", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'i': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'm':
                            case 'o' ... 'z':
                                memcpy(ident, "conti", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'n': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 't':
                                case 'v' ... 'z':
                                    memcpy(ident, "contin", 6); ident_pos = 6; goto ident_r_is_valid;
                                case 'u': switch ((r = getc(stream))) {
                                    case '_':
                                    case '0' ... '9':
                                    case 'A' ... 'Z':
                                    case 'a' ... 'd':
                                    case 'f' ... 'z':
                                        memcpy(ident, "continu", 7); ident_pos = 7; goto ident_r_is_valid;
                                    case 'e': switch ((r = getc(stream))) {
                                        case '_':
                                        case '0' ... '9':
                                        case 'A' ... 'Z':
                                        case 'a' ... 'z':
                                            memcpy(ident, "continue", 8); ident_pos = 8; goto ident_r_is_valid;
                                        default: ungetc(r, stream); tk_out->tk_id = TK_K_CONTINUE; return 0;
                                    }
                                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "continu", 8); return 0;
                                }
                                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "contin", 7); return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "conti", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "cont", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "con", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "co", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "c", 2); return 0;
        }
        case 'd': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'd':
            case 'f' ... 'n':
            case 'p' ... 'z':
                memcpy(ident, "d", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'e': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'e':
                case 'g' ... 'z':
                    memcpy(ident, "de", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'f': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'b' ... 'z':
                        memcpy(ident, "def", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'a': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 't':
                        case 'v' ... 'z':
                            memcpy(ident, "defa", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'u': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'k':
                            case 'm' ... 'z':
                                memcpy(ident, "defau", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'l': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 's':
                                case 'u' ... 'z':
                                    memcpy(ident, "defaul", 6); ident_pos = 6; goto ident_r_is_valid;
                                case 't': switch ((r = getc(stream))) {
                                    case '_':
                                    case '0' ... '9':
                                    case 'A' ... 'Z':
                                    case 'a' ... 'z':
                                        memcpy(ident, "default", 7); ident_pos = 7; goto ident_r_is_valid;
                                    default: ungetc(r, stream); tk_out->tk_id = TK_K_DEFAULT; return 0;
                                }
                                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "defaul", 7); return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "defau", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "defa", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "def", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "de", 3); return 0;
            }
            case 'o': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 't':
                case 'v' ... 'z':
                    memcpy(ident, "do", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'u': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a':
                    case 'c' ... 'z':
                        memcpy(ident, "dou", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'b': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'k':
                        case 'm' ... 'z':
                            memcpy(ident, "doub", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'l': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'd':
                            case 'f' ... 'z':
                                memcpy(ident, "doubl", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'e': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'z':
                                    memcpy(ident, "double", 6); ident_pos = 6; goto ident_r_is_valid;
                                default: ungetc(r, stream); tk_out->tk_id = TK_K_DOUBLE; return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "doubl", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "doub", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "dou", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_K_DO; return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "d", 2); return 0;
        }
        case 'e': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'k':
            case 'm':
            case 'o' ... 'w':
            case 'y' ... 'z':
                memcpy(ident, "e", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'l': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'r':
                case 't' ... 'z':
                    memcpy(ident, "el", 2); ident_pos = 2; goto ident_r_is_valid;
                case 's': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'd':
                    case 'f' ... 'z':
                        memcpy(ident, "els", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'e': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'z':
                            memcpy(ident, "else", 4); ident_pos = 4; goto ident_r_is_valid;
                        default: ungetc(r, stream); tk_out->tk_id = TK_K_ELSE; return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "els", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "el", 3); return 0;
            }
            case 'n': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 't':
                case 'v' ... 'z':
                    memcpy(ident, "en", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'u': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'l':
                    case 'n' ... 'z':
                        memcpy(ident, "enu", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'm': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'z':
                            memcpy(ident, "enum", 4); ident_pos = 4; goto ident_r_is_valid;
                        default: ungetc(r, stream); tk_out->tk_id = TK_K_ENUM; return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "enu", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "en", 3); return 0;
            }
            case 'x': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 's':
                case 'u' ... 'z':
                    memcpy(ident, "ex", 2); ident_pos = 2; goto ident_r_is_valid;
                case 't': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'd':
                    case 'f' ... 'z':
                        memcpy(ident, "ext", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'e': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'q':
                        case 's' ... 'z':
                            memcpy(ident, "exte", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'r': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'm':
                            case 'o' ... 'z':
                                memcpy(ident, "exter", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'n': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'z':
                                    memcpy(ident, "extern", 6); ident_pos = 6; goto ident_r_is_valid;
                                default: ungetc(r, stream); tk_out->tk_id = TK_K_EXTERN; return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "exter", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "exte", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "ext", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "ex", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "e", 2); return 0;
        }
        case 'f': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'k':
            case 'm' ... 'n':
            case 'p' ... 'z':
                memcpy(ident, "f", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'l': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'n':
                case 'p' ... 'z':
                    memcpy(ident, "fl", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'o': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'b' ... 'z':
                        memcpy(ident, "flo", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'a': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 's':
                        case 'u' ... 'z':
                            memcpy(ident, "floa", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 't': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'z':
                                memcpy(ident, "float", 5); ident_pos = 5; goto ident_r_is_valid;
                            default: ungetc(r, stream); tk_out->tk_id = TK_K_FLOAT; return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "floa", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "flo", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "fl", 3); return 0;
            }
            case 'o': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'q':
                case 's' ... 'z':
                    memcpy(ident, "fo", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'r': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'z':
                        memcpy(ident, "for", 3); ident_pos = 3; goto ident_r_is_valid;
                    default: ungetc(r, stream); tk_out->tk_id = TK_K_FOR; return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "fo", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "f", 2); return 0;
        }
        case 'g': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'n':
            case 'p' ... 'z':
                memcpy(ident, "g", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'o': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 's':
                case 'u' ... 'z':
                    memcpy(ident, "go", 2); ident_pos = 2; goto ident_r_is_valid;
                case 't': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'n':
                    case 'p' ... 'z':
                        memcpy(ident, "got", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'o': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'z':
                            memcpy(ident, "goto", 4); ident_pos = 4; goto ident_r_is_valid;
                        default: ungetc(r, stream); tk_out->tk_id = TK_K_GOTO; return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "got", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "go", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "g", 2); return 0;
        }
        case 'i': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'e':
            case 'g' ... 'm':
            case 'o' ... 'z':
                memcpy(ident, "i", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'f': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'z':
                    memcpy(ident, "if", 2); ident_pos = 2; goto ident_r_is_valid;
                default: ungetc(r, stream); tk_out->tk_id = TK_K_IF; return 0;
            }
            case 'n': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 's':
                case 'u' ... 'z':
                    memcpy(ident, "in", 2); ident_pos = 2; goto ident_r_is_valid;
                case 't': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'z':
                        memcpy(ident, "int", 3); ident_pos = 3; goto ident_r_is_valid;
                    default: ungetc(r, stream); tk_out->tk_id = TK_K_INT; return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "in", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "i", 2); return 0;
        }
        case 'l': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'n':
            case 'p' ... 'z':
                memcpy(ident, "l", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'o': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'm':
                case 'o' ... 'z':
                    memcpy(ident, "lo", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'n': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'f':
                    case 'h' ... 'z':
                        memcpy(ident, "lon", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'g': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'z':
                            memcpy(ident, "long", 4); ident_pos = 4; goto ident_r_is_valid;
                        default: ungetc(r, stream); tk_out->tk_id = TK_K_LONG; return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "lon", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "lo", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "l", 2); return 0;
        }
        case 'r': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'd':
            case 'f' ... 'z':
                memcpy(ident, "r", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'e': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'f':
                case 'h' ... 's':
                case 'u' ... 'z':
                    memcpy(ident, "re", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'g': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'h':
                    case 'j' ... 'z':
                        memcpy(ident, "reg", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'i': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'r':
                        case 't' ... 'z':
                            memcpy(ident, "regi", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 's': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 's':
                            case 'u' ... 'z':
                                memcpy(ident, "regis", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 't': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'd':
                                case 'f' ... 'z':
                                    memcpy(ident, "regist", 6); ident_pos = 6; goto ident_r_is_valid;
                                case 'e': switch ((r = getc(stream))) {
                                    case '_':
                                    case '0' ... '9':
                                    case 'A' ... 'Z':
                                    case 'a' ... 'q':
                                    case 's' ... 'z':
                                        memcpy(ident, "registe", 7); ident_pos = 7; goto ident_r_is_valid;
                                    case 'r': switch ((r = getc(stream))) {
                                        case '_':
                                        case '0' ... '9':
                                        case 'A' ... 'Z':
                                        case 'a' ... 'z':
                                            memcpy(ident, "register", 8); ident_pos = 8; goto ident_r_is_valid;
                                        default: ungetc(r, stream); tk_out->tk_id = TK_K_REGISTER; return 0;
                                    }
                                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "registe", 8); return 0;
                                }
                                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "regist", 7); return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "regis", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "regi", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "reg", 4); return 0;
                }
                case 't': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 't':
                    case 'v' ... 'z':
                        memcpy(ident, "ret", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'u': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'q':
                        case 's' ... 'z':
                            memcpy(ident, "retu", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'r': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'm':
                            case 'o' ... 'z':
                                memcpy(ident, "retur", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'n': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'z':
                                    memcpy(ident, "return", 6); ident_pos = 6; goto ident_r_is_valid;
                                default: ungetc(r, stream); tk_out->tk_id = TK_K_RETURN; return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "retur", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "retu", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "ret", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "re", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "r", 2); return 0;
        }
        case 's': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'g':
            case 'j' ... 's':
            case 'u' ... 'v':
            case 'x' ... 'z':
                memcpy(ident, "s", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'h': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'n':
                case 'p' ... 'z':
                    memcpy(ident, "sh", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'o': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'q':
                    case 's' ... 'z':
                        memcpy(ident, "sho", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'r': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 's':
                        case 'u' ... 'z':
                            memcpy(ident, "shor", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 't': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'z':
                                memcpy(ident, "short", 5); ident_pos = 5; goto ident_r_is_valid;
                            default: ungetc(r, stream); tk_out->tk_id = TK_K_SHORT; return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "shor", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "sho", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "sh", 3); return 0;
            }
            case 'i': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'f':
                case 'h' ... 'y':
                    memcpy(ident, "si", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'g': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'm':
                    case 'o' ... 'z':
                        memcpy(ident, "sig", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'n': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'd':
                        case 'f' ... 'z':
                            memcpy(ident, "sign", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'e': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'c':
                            case 'e' ... 'z':
                                memcpy(ident, "signe", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'd': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'z':
                                    memcpy(ident, "signed", 6); ident_pos = 6; goto ident_r_is_valid;
                                default: ungetc(r, stream); tk_out->tk_id = TK_K_SIGNED; return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "signe", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "sign", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "sig", 4); return 0;
                }
                case 'z': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'd':
                    case 'f' ... 'z':
                        memcpy(ident, "siz", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'e': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'n':
                        case 'p' ... 'z':
                            memcpy(ident, "size", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'o': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'e':
                            case 'g' ... 'z':
                                memcpy(ident, "sizeo", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'f': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'z':
                                    memcpy(ident, "sizeof", 6); ident_pos = 6; goto ident_r_is_valid;
                                default: ungetc(r, stream); tk_out->tk_id = TK_K_SIZEOF; return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "sizeo", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "size", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "siz", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "si", 3); return 0;
            }
            case 't': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'b' ... 'q':
                case 's' ... 'z':
                    memcpy(ident, "st", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'a': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 's':
                    case 'u' ... 'z':
                        memcpy(ident, "sta", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 't': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'h':
                        case 'j' ... 'z':
                            memcpy(ident, "stat", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'i': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'b':
                            case 'd' ... 'z':
                                memcpy(ident, "stati", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'c': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'z':
                                    memcpy(ident, "static", 6); ident_pos = 6; goto ident_r_is_valid;
                                default: ungetc(r, stream); tk_out->tk_id = TK_K_STATIC; return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "stati", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "stat", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "sta", 4); return 0;
                }
                case 'r': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 't':
                    case 'v' ... 'z':
                        memcpy(ident, "str", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'u': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'b':
                        case 'd' ... 'z':
                            memcpy(ident, "stru", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'c': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 's':
                            case 'u' ... 'z':
                                memcpy(ident, "struc", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 't': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'z':
                                    memcpy(ident, "struct", 6); ident_pos = 6; goto ident_r_is_valid;
                                default: ungetc(r, stream); tk_out->tk_id = TK_K_STRUCT; return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "struc", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "stru", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "str", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "st", 3); return 0;
            }
            case 'w': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'h':
                case 'j' ... 'z':
                    memcpy(ident, "sw", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'i': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 's':
                    case 'u' ... 'z':
                        memcpy(ident, "swi", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 't': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'b':
                        case 'd' ... 'z':
                            memcpy(ident, "swit", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'c': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'g':
                            case 'i' ... 'z':
                                memcpy(ident, "switc", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'h': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'z':
                                    memcpy(ident, "switch", 6); ident_pos = 6; goto ident_r_is_valid;
                                default: ungetc(r, stream); tk_out->tk_id = TK_K_SWITCH; return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "switc", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "swit", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "swi", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "sw", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "s", 2); return 0;
        }
        case 't': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'x':
            case 'z':
                memcpy(ident, "t", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'y': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'o':
                case 'q' ... 'z':
                    memcpy(ident, "ty", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'p': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'd':
                    case 'f' ... 'z':
                        memcpy(ident, "typ", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'e': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'c':
                        case 'e' ... 'z':
                            memcpy(ident, "type", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'd': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'd':
                            case 'f' ... 'z':
                                memcpy(ident, "typed", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'e': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'e':
                                case 'g' ... 'z':
                                    memcpy(ident, "typede", 6); ident_pos = 6; goto ident_r_is_valid;
                                case 'f': switch ((r = getc(stream))) {
                                    case '_':
                                    case '0' ... '9':
                                    case 'A' ... 'Z':
                                    case 'a' ... 'z':
                                        memcpy(ident, "typedef", 7); ident_pos = 7; goto ident_r_is_valid;
                                    default: ungetc(r, stream); tk_out->tk_id = TK_K_TYPEDEF; return 0;
                                }
                                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "typede", 7); return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "typed", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "type", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "typ", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "ty", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "t", 2); return 0;
        }
        case 'u': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'm':
            case 'o' ... 'z':
                memcpy(ident, "u", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'n': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'h':
                case 'j' ... 'r':
                case 't' ... 'z':
                    memcpy(ident, "un", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'i': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'n':
                    case 'p' ... 'z':
                        memcpy(ident, "uni", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'o': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'm':
                        case 'o' ... 'z':
                            memcpy(ident, "unio", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'n': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'z':
                                memcpy(ident, "union", 5); ident_pos = 5; goto ident_r_is_valid;
                            default: ungetc(r, stream); tk_out->tk_id = TK_K_UNION; return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "unio", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "uni", 4); return 0;
                }
                case 's': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'h':
                    case 'j' ... 'z':
                        memcpy(ident, "uns", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'i': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'f':
                        case 'h' ... 'z':
                            memcpy(ident, "unsi", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'g': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'm':
                            case 'o' ... 'z':
                                memcpy(ident, "unsig", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'n': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'd':
                                case 'f' ... 'z':
                                    memcpy(ident, "unsign", 6); ident_pos = 6; goto ident_r_is_valid;
                                case 'e': switch ((r = getc(stream))) {
                                    case '_':
                                    case '0' ... '9':
                                    case 'A' ... 'Z':
                                    case 'a' ... 'c':
                                    case 'e' ... 'z':
                                        memcpy(ident, "unsigne", 7); ident_pos = 7; goto ident_r_is_valid;
                                    case 'd': switch ((r = getc(stream))) {
                                        case '_':
                                        case '0' ... '9':
                                        case 'A' ... 'Z':
                                        case 'a' ... 'z':
                                            memcpy(ident, "unsigned", 8); ident_pos = 8; goto ident_r_is_valid;
                                        default: ungetc(r, stream); tk_out->tk_id = TK_K_UNSIGNED; return 0;
                                    }
                                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "unsigne", 8); return 0;
                                }
                                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "unsign", 7); return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "unsig", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "unsi", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "uns", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "un", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "u", 2); return 0;
        }
        case 'v': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'n':
            case 'p' ... 'z':
                memcpy(ident, "v", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'o': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'h':
                case 'j' ... 'k':
                case 'm' ... 'z':
                    memcpy(ident, "vo", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'i': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'c':
                    case 'e' ... 'z':
                        memcpy(ident, "voi", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'd': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'z':
                            memcpy(ident, "void", 4); ident_pos = 4; goto ident_r_is_valid;
                        default: ungetc(r, stream); tk_out->tk_id = TK_K_VOID; return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "voi", 4); return 0;
                }
                case 'l': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'b' ... 'z':
                        memcpy(ident, "vol", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'a': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 's':
                        case 'u' ... 'z':
                            memcpy(ident, "vola", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 't': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'h':
                            case 'j' ... 'z':
                                memcpy(ident, "volat", 5); ident_pos = 5; goto ident_r_is_valid;
                            case 'i': switch ((r = getc(stream))) {
                                case '_':
                                case '0' ... '9':
                                case 'A' ... 'Z':
                                case 'a' ... 'k':
                                case 'm' ... 'z':
                                    memcpy(ident, "volati", 6); ident_pos = 6; goto ident_r_is_valid;
                                case 'l': switch ((r = getc(stream))) {
                                    case '_':
                                    case '0' ... '9':
                                    case 'A' ... 'Z':
                                    case 'a' ... 'd':
                                    case 'f' ... 'z':
                                        memcpy(ident, "volatil", 7); ident_pos = 7; goto ident_r_is_valid;
                                    case 'e': switch ((r = getc(stream))) {
                                        case '_':
                                        case '0' ... '9':
                                        case 'A' ... 'Z':
                                        case 'a' ... 'z':
                                            memcpy(ident, "volatile", 8); ident_pos = 8; goto ident_r_is_valid;
                                        default: ungetc(r, stream); tk_out->tk_id = TK_K_VOLATILE; return 0;
                                    }
                                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "volatil", 8); return 0;
                                }
                                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "volati", 7); return 0;
                            }
                            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "volat", 6); return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "vola", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "vol", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "vo", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "v", 2); return 0;
        }
        case 'w': switch ((r = getc(stream))) {
            case '_':
            case '0' ... '9':
            case 'A' ... 'Z':
            case 'a' ... 'g':
            case 'i' ... 'z':
                memcpy(ident, "w", 1); ident_pos = 1; goto ident_r_is_valid;
            case 'h': switch ((r = getc(stream))) {
                case '_':
                case '0' ... '9':
                case 'A' ... 'Z':
                case 'a' ... 'h':
                case 'j' ... 'z':
                    memcpy(ident, "wh", 2); ident_pos = 2; goto ident_r_is_valid;
                case 'i': switch ((r = getc(stream))) {
                    case '_':
                    case '0' ... '9':
                    case 'A' ... 'Z':
                    case 'a' ... 'k':
                    case 'm' ... 'z':
                        memcpy(ident, "whi", 3); ident_pos = 3; goto ident_r_is_valid;
                    case 'l': switch ((r = getc(stream))) {
                        case '_':
                        case '0' ... '9':
                        case 'A' ... 'Z':
                        case 'a' ... 'd':
                        case 'f' ... 'z':
                            memcpy(ident, "whil", 4); ident_pos = 4; goto ident_r_is_valid;
                        case 'e': switch ((r = getc(stream))) {
                            case '_':
                            case '0' ... '9':
                            case 'A' ... 'Z':
                            case 'a' ... 'z':
                                memcpy(ident, "while", 5); ident_pos = 5; goto ident_r_is_valid;
                            default: ungetc(r, stream); tk_out->tk_id = TK_K_WHILE; return 0;
                        }
                        default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "whil", 5); return 0;
                    }
                    default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "whi", 4); return 0;
                }
                default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "wh", 3); return 0;
            }
            default: ungetc(r, stream); tk_out->tk_id = TK_IDENT; memcpy(tk_out->data.ident, "w", 2); return 0;
        }
