#define TOK_IDENT 0
#define TOK_NUM 1
#define TOK_OPAR 2
#define TOK_CPAR 3
#define TOK_COMMA 4
#define TOK_OCBRA 5
#define TOK_CCBRA 6
#define TOK_VOID 7
#define TOK_U8 8
#define TOK_I8 9
#define TOK_U16 10
#define TOK_I16 11
#define TOK_U32 12
#define TOK_I32 13
#define TOK_U64 14
#define TOK_I64 15
#define TOK_PLUS 16
#define TOK_MINUS 17

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
