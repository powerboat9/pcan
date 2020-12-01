#define TK_K_AUTO 0
#define TK_K_DOUBLE 1
#define TK_K_INT 2
#define TK_K_STRUCT 3
#define TK_K_BREAK 4
#define TK_K_ELSE 5
#define TK_K_LONG 6
#define TK_K_SWITCH 7
#define TK_K_CASE 8
#define TK_K_ENUM 9
#define TK_K_REGISTER 10
#define TK_K_TYPEDEF 11
#define TK_K_CHAR 12
#define TK_K_EXTERN 13
#define TK_K_RETURN 14
#define TK_K_UNION 15
#define TK_K_CONST 16
#define TK_K_FLOAT 17
#define TK_K_SHORT 18
#define TK_K_UNSIGNED 19
#define TK_K_CONTINUE 20
#define TK_K_FOR 21
#define TK_K_SIGNED 22
#define TK_K_VOID 23
#define TK_K_DEFAULT 24
#define TK_K_GOTO 25
#define TK_K_SIZEOF 26
#define TK_K_VOLATILE 27
#define TK_K_DO 28
#define TK_K_IF 29
#define TK_K_STATIC 30
#define TK_K_WHILE 31

#define TK_SEMICOLON 32
#define TK_O_CBRAK 33
#define TK_C_CBRAK 34
#define TK_COMMA 35
#define TK_EQ 36
#define TK_COLON 37
#define TK_O_PAREN 38
#define TK_C_PAREN 39
#define TK_O_BRAK 40
#define TK_C_BRAK 41
#define TK_STAR 42
#define TK_TRIP_DOT 43
#define TK_QMARK 44
#define TK_ASIGN_STAR 45
#define TK_ASIGN_SLASH 46
#define TK_ASIGN_MOD 47
#define TK_ASIGN_PLUS 48
#define TK_ASIGN_MINUS 49
#define TK_ASIGN_SHL 50
#define TK_ASIGN_SHR 51
#define TK_ASIGN_AND 52
#define TK_ASIGN_XOR 53
#define TK_ASIGN_OR 54
#define TK_LOGIC_OR 55
#define TK_LOGIC_AND 56
#define TK_OR 57
#define TK_XOR 58
#define TK_AND 59
#define TK_EQEQ 60
#define TK_NEQ 61
#define TK_LT 62
#define TK_GT 63
#define TK_LTE 64
#define TK_GTE 65
#define TK_SHL 66
#define TK_SHR 67
#define TK_PLUS 68
#define TK_MINUS 69
#define TK_SLASH 70
#define TK_MOD 71
#define TK_INC 72
#define TK_DEC 73
#define TK_TILDA 74
#define TK_EXCLA 75
#define TK_DOT 76
#define TK_INDIR_AC 77

#define TK_INT_CONST 78
#define TK_CHAR_CONST 79
#define TK_FLOAT_CONST 80
#define TK_IDENT 81
#define TK_STRING 82
#define TK_ENUM_CONST 83
#define TK_TYPEDEF_NAME 84

#define MAX_IDENT_SIZE 32

char *get_token_name(int tk_id);

#define INT_TYPE_NORM 0
#define INT_TYPE_LONG 1
#define INT_TYPE_UNSIGN 2
#define INT_TYPE_LUNSIGN 3

#define FP_TYPE_FLOAT 0
#define FP_TYPE_DOUBLE 1
#define FP_TYPE_LDOUBLE 2

struct token_data {
    int tk_id;
    union {
        char ident[MAX_IDENT_SIZE];
        struct {
            unsigned long n;
            int type;
        } integer;
        char c;
        struct {
            union {
                float f;
                double d;
                long double ld;
            } fp;
            int type;
        } floating;
        char *str;
        int token_id;
    } data;
};
