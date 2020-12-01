%{
#include <stdlib.h>
#include <stdio.h>

void yyerror(const char *s) {
    fprintf(stderr, "[ERROR] %s\n", s);
    exit(-1);
}

int yywrap() {
    return 1;
}

int main(int argc, char **argv) {
    yyparse();
}

#define SHORT_SIZE 2
#define INT_SIZE 4
#define LONG_SIZE 8

#define TYPE_VOID 0
#define TYPE_SHORT 1
#define TYPE_USHORT 2
#define TYPE_INT 3
#define TYPE_UINT 4
#define TYPE_LONG 5
#define TYPE_ULONG 6
#define TYPE_FLOAT 7
#define TYPE_DOUBLE 8
#define TYPE_LDOUBLE 9
#define TYPE_USER_START 10

#define TYPE_USER_MAX_CNT 8192

#define TT_PTR 0
#define TT_FPTR 1
#define TT_STRUCT 2
#define TT_UNION 3

struct type_data {
    int type;
    union {
        struct {
            int type_id;
        } ptr;
        struct {
            int nargs;
            int nrets;
            int *type_ids;
        } fptr;
        struct {
            int nentries;
            char **names;
            int *type_ids;
        } struct_data;
        struct {
            int nentries;
            char **names;
            int *type_ids;
        } union_data;
    } data;
}

struct type_data data_entries[TYPE_USER_MAX_CNT];
int next_type_id = TYPE_USER_START;

#define EXP_FLAG_IS_LVAL 1
#define EXP_FLAG

struct exp_val {
    int flags;
%}

%token K_AUTO K_DOUBLE K_INT K_STRUCT
%token K_BREAK K_ELSE K_LONG K_SWITCH
%token K_CASE K_ENUM K_REGISTER K_TYPEDEF
%token K_CHAR K_EXTERN K_RETURN K_UNION
%token K_CONST K_FLOAT K_SHORT K_UNSIGNED
%token K_CONTINUE K_FOR K_SIGNED K_VOID
%token K_DEFAULT K_GOTO K_SIZEOF K_VOLATILE
%token K_DO K_IF K_STATIC K_WHILE

%token SEMICOLON O_CBRAK C_CBRAK COMMA EQUALS COLON O_PAREN C_PAREN O_BRAK C_BRAK STAR TRIP_DOT QMARK

%token ASIGN_STAR ASIGN_SLASH ASIGN_MOD ASIGN_PLUS ASIGN_MINUS ASIGN_SHL ASIGN_SHR ASIGN_AND ASIGN_XOR ASIGN_OR

%token LOGIC_OR LOGIC_AND OR XOR AND EQEQ NEQ LT GT LTE GTE SHL SHR PLUS MINUS SLASH MOD INC DEC TILDA EXCLA DOT INDIR_AC

%token INT_CONST CHAR_CONST FLOAT_CONST IDENT STRING ENUM_CONST

%token TYPEDEF_NAME

%union {
    int type_id;
    char *str_lit;
    
}

%%
translation_unit: external_declaration
                | translation_unit external_declaration;

external_declaration: function_definition
                    | declaration;

function_definition: declaration_specifiers declarator declaration_list compound_statement
                   | declaration_specifiers declarator compound_statement
                   | declarator compound_statement
                   | declarator declaration_list compound_statement;

declaration: declaration_specifiers SEMICOLON
           | declaration_specifiers init_declarator_list SEMICOLON;

declaration_list: declaration
                | declaration_list declaration;

declaration_specifiers: storage_class_specifier declaration_specifiers
                      | storage_class_specifier
                      | type_specifier declaration_specifiers
                      | type_specifier
                      | type_qualifier declaration_specifiers
                      | type_qualifier;

storage_class_specifier: K_AUTO
                       | K_REGISTER
                       | K_STATIC
                       | K_EXTERN
                       | K_TYPEDEF;

type_specifier: K_VOID
              | K_CHAR
              | K_SHORT
              | K_INT
              | K_LONG
              | K_FLOAT
              | K_DOUBLE
              | K_SIGNED
              | K_UNSIGNED
              | struct_or_union_specifier
              | enum_specifier
              | TYPEDEF_NAME;

type_qualifier: K_CONST
              | K_VOLATILE;

struct_or_union_specifier: struct_or_union IDENT O_CBRAK struct_declaration_list C_CBRAK
                         | struct_or_union O_CBRAK struct_declaration_list C_CBRAK
                         | struct_or_union IDENT;

struct_or_union: K_STRUCT
               | K_UNION;

struct_declaration_list: struct_declaration
                       | struct_declaration_list struct_declaration;

init_declarator_list: init_declarator
                    | init_declarator_list COMMA init_declarator;

init_declarator: declarator
               | declarator EQUALS initializer;

struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON;

specifier_qualifier_list: type_specifier specifier_qualifier_list
                        | type_specifier
                        | type_qualifier specifier_qualifier_list
                        | type_qualifier;

struct_declarator_list: struct_declarator
                      | struct_declarator_list COMMA struct_declarator;

struct_declarator: declarator
                 | declarator COLON constant_expression
                 | COLON constant_expression;

enum_specifier: K_ENUM IDENT O_CBRAK enumerator_list C_CBRAK
              | K_ENUM O_CBRAK enumerator_list C_CBRAK
              | K_ENUM IDENT;

enumerator_list: enumerator
               | enumerator_list COMMA enumerator;

enumerator: IDENT
          | IDENT EQUALS constant_expression;

declarator: pointer direct_declarator
          | direct_declarator;

direct_declarator: IDENT
                 | O_PAREN declarator C_PAREN
                 | direct_declarator O_BRAK constant_expression C_BRAK
                 | direct_declarator O_BRAK C_BRAK
                 | direct_declarator O_PAREN parameter_type_list C_PAREN
                 | direct_declarator O_PAREN identifier_list C_PAREN
                 | direct_declarator O_PAREN C_PAREN;

pointer: STAR
       | STAR type_qualifier_list
       | STAR type_qualifier_list pointer
       | STAR pointer;

type_qualifier_list: type_qualifier
                   | type_qualifier_list type_qualifier;

parameter_type_list: parameter_list
                   | parameter_list COMMA TRIP_DOT;

parameter_list: parameter_declaration
              | parameter_list COMMA parameter_declaration;

parameter_declaration: declaration_specifiers declarator
                     | declaration_specifiers abstract_declarator
                     | declaration_specifiers;

identifier_list: IDENT
                 identifier_list COMMA IDENT;

initializer: assignment_expression
           | O_CBRAK initializer_list C_CBRAK
           | O_CBRAK initializer_list COMMA C_CBRAK;

initializer_list: initializer
                | initializer_list COMMA initializer;

type_name: specifier_qualifier_list abstract_declarator
         | specifier_qualifier_list;

abstract_declarator: pointer
                   | pointer direct_abstract_declarator
                   | direct_abstract_declarator;

direct_abstract_declarator: O_PAREN abstract_declarator C_PAREN
                          | direct_abstract_declarator O_BRAK constant_expression C_BRAK
                          | direct_abstract_declarator O_BRAK C_BRAK
                          | O_BRAK constant_expression C_BRAK
                          | O_BRAK C_BRAK
                          | direct_abstract_declarator O_PAREN parameter_type_list C_PAREN
                          | direct_abstract_declarator O_PAREN C_PAREN
                          | O_PAREN parameter_type_list C_PAREN
                          | O_PAREN C_PAREN;

statement: labeled_statement
         | expression_statement
         | compound_statement
         | selection_statement
         | iteration_statement
         | jump_statement;

labeled_statement: IDENT COLON statement
                 | K_CASE constant_expression COLON statement
                 | K_DEFAULT COLON statement;

expression_statement: SEMICOLON
                    | expression SEMICOLON;

compound_statement: O_CBRAK declaration_list statement_list C_CBRAK
                  | O_CBRAK declaration_list C_CBRAK
                  | O_CBRAK statement_list C_CBRAK
                  | O_CBRAK C_CBRAK;

statement_list: statement
              | statement_list statement;

selection_statement: K_IF O_PAREN expression C_PAREN statement
                   | K_IF O_PAREN expression C_PAREN statement K_ELSE statement
                   | K_SWITCH O_PAREN expression C_PAREN statement;

iteration_statement: K_WHILE O_PAREN expression C_PAREN statement;
                   | K_DO statement K_WHILE O_PAREN expression C_PAREN SEMICOLON
                   | K_FOR O_PAREN expression SEMICOLON expression SEMICOLON expression C_PAREN statement
                   | K_FOR O_PAREN SEMICOLON expression SEMICOLON expression C_PAREN statement
                   | K_FOR O_PAREN expression SEMICOLON SEMICOLON expression C_PAREN statement
                   | K_FOR O_PAREN expression SEMICOLON expression SEMICOLON C_PAREN statement
                   | K_FOR O_PAREN expression SEMICOLON SEMICOLON C_PAREN statement
                   | K_FOR O_PAREN SEMICOLON expression SEMICOLON C_PAREN statement
                   | K_FOR O_PAREN SEMICOLON SEMICOLON expression C_PAREN statement
                   | K_FOR O_PAREN SEMICOLON SEMICOLON C_PAREN statement;

jump_statement: K_GOTO IDENT SEMICOLON
              | K_CONTINUE SEMICOLON
              | K_BREAK SEMICOLON
              | K_RETURN SEMICOLON
              | K_RETURN expression SEMICOLON;

expression: assignment_expression
          | expression COMMA assignment_expression;

assignment_expression: conditional_expression
                     | unary_expression assignment_operator assignment_expression;

assignment_operator: EQUALS
                   | ASIGN_STAR
                   | ASIGN_SLASH
                   | ASIGN_MOD
                   | ASIGN_PLUS
                   | ASIGN_MINUS
                   | ASIGN_SHL
                   | ASIGN_SHR
                   | ASIGN_AND
                   | ASIGN_XOR
                   | ASIGN_OR;

conditional_expression: logical_or_expression
                      | logical_or_expression QMARK expression COLON conditional_expression;

constant_expression: conditional_expression;

logical_or_expression: logical_and_expression
                     | logical_or_expression LOGIC_OR logical_and_expression;

logical_and_expression: inclusive_or_expression
                      | logical_and_expression LOGIC_AND inclusive_or_expression;

inclusive_or_expression: exclusive_or_expression
                       | inclusive_or_expression OR exclusive_or_expression;

exclusive_or_expression: and_expression
                       | exclusive_or_expression XOR and_expression;

and_expression: equality_expression
              | and_expression AND equality_expression;

equality_expression: relational_expression
                   | equality_expression EQEQ relational_expression
                   | equality_expression NEQ relational_expression;

relational_expression: shift_expression
                     | relational_expression LT shift_expression
                     | relational_expression GT shift_expression
                     | relational_expression LTE shift_expression
                     | relational_expression GTE shift_expression;

shift_expression: additive_expression
                | shift_expression SHL additive_expression
                | shift_expression SHR additive_expression;

additive_expression: multiplicative_expression
                   | additive_expression PLUS multiplicative_expression
                   | additive_expression MINUS multiplicative_expression;

multiplicative_expression: multiplicative_expression STAR cast_expression
                         | multiplicative_expression SLASH cast_expression
                         | multiplicative_expression MOD cast_expression;

cast_expression: unary_expression
               | O_PAREN type_name C_PAREN cast_expression;

unary_expression: postfix_expression
                | INC unary_expression
                | DEC unary_expression
                | unary_operator cast_expression
                | K_SIZEOF unary_expression
                | K_SIZEOF O_PAREN type_name C_PAREN;

unary_operator: AND
              | STAR
              | PLUS
              | MINUS
              | TILDA
              | EXCLA;

postfix_expression: primary_expression
                  | postfix_expression O_BRAK expression C_BRAK
                  | postfix_expression O_PAREN argument_expression_list C_PAREN
                  | postfix_expression O_PAREN C_PAREN
                  | postfix_expression DOT IDENT
                  | postfix_expression INDIR_AC IDENT
                  | postfix_expression INC
                  | postfix_expression DEC;

primary_expression: IDENT
                  | constant
                  | STRING
                  | O_PAREN expression C_PAREN;

argument_expression_list: assignment_expression
                        | argument_expression_list COMMA assignment_expression;

constant: INT_CONST
        | CHAR_CONST
        | FLOAT_CONST
        | ENUM_CONST;
