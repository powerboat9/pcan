/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "combo.y"

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

#line 89 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    K_AUTO = 258,                  /* K_AUTO  */
    K_DOUBLE = 259,                /* K_DOUBLE  */
    K_INT = 260,                   /* K_INT  */
    K_STRUCT = 261,                /* K_STRUCT  */
    K_BREAK = 262,                 /* K_BREAK  */
    K_ELSE = 263,                  /* K_ELSE  */
    K_LONG = 264,                  /* K_LONG  */
    K_SWITCH = 265,                /* K_SWITCH  */
    K_CASE = 266,                  /* K_CASE  */
    K_ENUM = 267,                  /* K_ENUM  */
    K_REGISTER = 268,              /* K_REGISTER  */
    K_TYPEDEF = 269,               /* K_TYPEDEF  */
    K_CHAR = 270,                  /* K_CHAR  */
    K_EXTERN = 271,                /* K_EXTERN  */
    K_RETURN = 272,                /* K_RETURN  */
    K_UNION = 273,                 /* K_UNION  */
    K_CONST = 274,                 /* K_CONST  */
    K_FLOAT = 275,                 /* K_FLOAT  */
    K_SHORT = 276,                 /* K_SHORT  */
    K_UNSIGNED = 277,              /* K_UNSIGNED  */
    K_CONTINUE = 278,              /* K_CONTINUE  */
    K_FOR = 279,                   /* K_FOR  */
    K_SIGNED = 280,                /* K_SIGNED  */
    K_VOID = 281,                  /* K_VOID  */
    K_DEFAULT = 282,               /* K_DEFAULT  */
    K_GOTO = 283,                  /* K_GOTO  */
    K_SIZEOF = 284,                /* K_SIZEOF  */
    K_VOLATILE = 285,              /* K_VOLATILE  */
    K_DO = 286,                    /* K_DO  */
    K_IF = 287,                    /* K_IF  */
    K_STATIC = 288,                /* K_STATIC  */
    K_WHILE = 289,                 /* K_WHILE  */
    SEMICOLON = 290,               /* SEMICOLON  */
    O_CBRAK = 291,                 /* O_CBRAK  */
    C_CBRAK = 292,                 /* C_CBRAK  */
    COMMA = 293,                   /* COMMA  */
    EQUALS = 294,                  /* EQUALS  */
    COLON = 295,                   /* COLON  */
    O_PAREN = 296,                 /* O_PAREN  */
    C_PAREN = 297,                 /* C_PAREN  */
    O_BRAK = 298,                  /* O_BRAK  */
    C_BRAK = 299,                  /* C_BRAK  */
    STAR = 300,                    /* STAR  */
    TRIP_DOT = 301,                /* TRIP_DOT  */
    QMARK = 302,                   /* QMARK  */
    ASIGN = 303,                   /* ASIGN  */
    ASIGN_STAR = 304,              /* ASIGN_STAR  */
    ASIGN_SLASH = 305,             /* ASIGN_SLASH  */
    ASIGN_MOD = 306,               /* ASIGN_MOD  */
    ASIGN_PLUS = 307,              /* ASIGN_PLUS  */
    ASIGN_MINUS = 308,             /* ASIGN_MINUS  */
    ASIGN_SHL = 309,               /* ASIGN_SHL  */
    ASIGN_SHR = 310,               /* ASIGN_SHR  */
    ASIGN_AND = 311,               /* ASIGN_AND  */
    ASIGN_XOR = 312,               /* ASIGN_XOR  */
    ASIGN_OR = 313,                /* ASIGN_OR  */
    LOGIC_OR = 314,                /* LOGIC_OR  */
    LOGIC_AND = 315,               /* LOGIC_AND  */
    OR = 316,                      /* OR  */
    XOR = 317,                     /* XOR  */
    AND = 318,                     /* AND  */
    EQEQ = 319,                    /* EQEQ  */
    NEQ = 320,                     /* NEQ  */
    LT = 321,                      /* LT  */
    GT = 322,                      /* GT  */
    LTE = 323,                     /* LTE  */
    GTE = 324,                     /* GTE  */
    SHL = 325,                     /* SHL  */
    SHR = 326,                     /* SHR  */
    PLUS = 327,                    /* PLUS  */
    MINUS = 328,                   /* MINUS  */
    SLASH = 329,                   /* SLASH  */
    MOD = 330,                     /* MOD  */
    INC = 331,                     /* INC  */
    DEC = 332,                     /* DEC  */
    TILDA = 333,                   /* TILDA  */
    EXCLA = 334,                   /* EXCLA  */
    DOT = 335,                     /* DOT  */
    INDIR_AC = 336,                /* INDIR_AC  */
    INT_CONST = 337,               /* INT_CONST  */
    CHAR_CONST = 338,              /* CHAR_CONST  */
    FLOAT_CONST = 339,             /* FLOAT_CONST  */
    IDENT = 340,                   /* IDENT  */
    STRING = 341,                  /* STRING  */
    ENUM_CONST = 342,              /* ENUM_CONST  */
    TYPEDEF_NAME = 343             /* TYPEDEF_NAME  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define K_AUTO 258
#define K_DOUBLE 259
#define K_INT 260
#define K_STRUCT 261
#define K_BREAK 262
#define K_ELSE 263
#define K_LONG 264
#define K_SWITCH 265
#define K_CASE 266
#define K_ENUM 267
#define K_REGISTER 268
#define K_TYPEDEF 269
#define K_CHAR 270
#define K_EXTERN 271
#define K_RETURN 272
#define K_UNION 273
#define K_CONST 274
#define K_FLOAT 275
#define K_SHORT 276
#define K_UNSIGNED 277
#define K_CONTINUE 278
#define K_FOR 279
#define K_SIGNED 280
#define K_VOID 281
#define K_DEFAULT 282
#define K_GOTO 283
#define K_SIZEOF 284
#define K_VOLATILE 285
#define K_DO 286
#define K_IF 287
#define K_STATIC 288
#define K_WHILE 289
#define SEMICOLON 290
#define O_CBRAK 291
#define C_CBRAK 292
#define COMMA 293
#define EQUALS 294
#define COLON 295
#define O_PAREN 296
#define C_PAREN 297
#define O_BRAK 298
#define C_BRAK 299
#define STAR 300
#define TRIP_DOT 301
#define QMARK 302
#define ASIGN 303
#define ASIGN_STAR 304
#define ASIGN_SLASH 305
#define ASIGN_MOD 306
#define ASIGN_PLUS 307
#define ASIGN_MINUS 308
#define ASIGN_SHL 309
#define ASIGN_SHR 310
#define ASIGN_AND 311
#define ASIGN_XOR 312
#define ASIGN_OR 313
#define LOGIC_OR 314
#define LOGIC_AND 315
#define OR 316
#define XOR 317
#define AND 318
#define EQEQ 319
#define NEQ 320
#define LT 321
#define GT 322
#define LTE 323
#define GTE 324
#define SHL 325
#define SHR 326
#define PLUS 327
#define MINUS 328
#define SLASH 329
#define MOD 330
#define INC 331
#define DEC 332
#define TILDA 333
#define EXCLA 334
#define DOT 335
#define INDIR_AC 336
#define INT_CONST 337
#define CHAR_CONST 338
#define FLOAT_CONST 339
#define IDENT 340
#define STRING 341
#define ENUM_CONST 342
#define TYPEDEF_NAME 343

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_K_AUTO = 3,                     /* K_AUTO  */
  YYSYMBOL_K_DOUBLE = 4,                   /* K_DOUBLE  */
  YYSYMBOL_K_INT = 5,                      /* K_INT  */
  YYSYMBOL_K_STRUCT = 6,                   /* K_STRUCT  */
  YYSYMBOL_K_BREAK = 7,                    /* K_BREAK  */
  YYSYMBOL_K_ELSE = 8,                     /* K_ELSE  */
  YYSYMBOL_K_LONG = 9,                     /* K_LONG  */
  YYSYMBOL_K_SWITCH = 10,                  /* K_SWITCH  */
  YYSYMBOL_K_CASE = 11,                    /* K_CASE  */
  YYSYMBOL_K_ENUM = 12,                    /* K_ENUM  */
  YYSYMBOL_K_REGISTER = 13,                /* K_REGISTER  */
  YYSYMBOL_K_TYPEDEF = 14,                 /* K_TYPEDEF  */
  YYSYMBOL_K_CHAR = 15,                    /* K_CHAR  */
  YYSYMBOL_K_EXTERN = 16,                  /* K_EXTERN  */
  YYSYMBOL_K_RETURN = 17,                  /* K_RETURN  */
  YYSYMBOL_K_UNION = 18,                   /* K_UNION  */
  YYSYMBOL_K_CONST = 19,                   /* K_CONST  */
  YYSYMBOL_K_FLOAT = 20,                   /* K_FLOAT  */
  YYSYMBOL_K_SHORT = 21,                   /* K_SHORT  */
  YYSYMBOL_K_UNSIGNED = 22,                /* K_UNSIGNED  */
  YYSYMBOL_K_CONTINUE = 23,                /* K_CONTINUE  */
  YYSYMBOL_K_FOR = 24,                     /* K_FOR  */
  YYSYMBOL_K_SIGNED = 25,                  /* K_SIGNED  */
  YYSYMBOL_K_VOID = 26,                    /* K_VOID  */
  YYSYMBOL_K_DEFAULT = 27,                 /* K_DEFAULT  */
  YYSYMBOL_K_GOTO = 28,                    /* K_GOTO  */
  YYSYMBOL_K_SIZEOF = 29,                  /* K_SIZEOF  */
  YYSYMBOL_K_VOLATILE = 30,                /* K_VOLATILE  */
  YYSYMBOL_K_DO = 31,                      /* K_DO  */
  YYSYMBOL_K_IF = 32,                      /* K_IF  */
  YYSYMBOL_K_STATIC = 33,                  /* K_STATIC  */
  YYSYMBOL_K_WHILE = 34,                   /* K_WHILE  */
  YYSYMBOL_SEMICOLON = 35,                 /* SEMICOLON  */
  YYSYMBOL_O_CBRAK = 36,                   /* O_CBRAK  */
  YYSYMBOL_C_CBRAK = 37,                   /* C_CBRAK  */
  YYSYMBOL_COMMA = 38,                     /* COMMA  */
  YYSYMBOL_EQUALS = 39,                    /* EQUALS  */
  YYSYMBOL_COLON = 40,                     /* COLON  */
  YYSYMBOL_O_PAREN = 41,                   /* O_PAREN  */
  YYSYMBOL_C_PAREN = 42,                   /* C_PAREN  */
  YYSYMBOL_O_BRAK = 43,                    /* O_BRAK  */
  YYSYMBOL_C_BRAK = 44,                    /* C_BRAK  */
  YYSYMBOL_STAR = 45,                      /* STAR  */
  YYSYMBOL_TRIP_DOT = 46,                  /* TRIP_DOT  */
  YYSYMBOL_QMARK = 47,                     /* QMARK  */
  YYSYMBOL_ASIGN = 48,                     /* ASIGN  */
  YYSYMBOL_ASIGN_STAR = 49,                /* ASIGN_STAR  */
  YYSYMBOL_ASIGN_SLASH = 50,               /* ASIGN_SLASH  */
  YYSYMBOL_ASIGN_MOD = 51,                 /* ASIGN_MOD  */
  YYSYMBOL_ASIGN_PLUS = 52,                /* ASIGN_PLUS  */
  YYSYMBOL_ASIGN_MINUS = 53,               /* ASIGN_MINUS  */
  YYSYMBOL_ASIGN_SHL = 54,                 /* ASIGN_SHL  */
  YYSYMBOL_ASIGN_SHR = 55,                 /* ASIGN_SHR  */
  YYSYMBOL_ASIGN_AND = 56,                 /* ASIGN_AND  */
  YYSYMBOL_ASIGN_XOR = 57,                 /* ASIGN_XOR  */
  YYSYMBOL_ASIGN_OR = 58,                  /* ASIGN_OR  */
  YYSYMBOL_LOGIC_OR = 59,                  /* LOGIC_OR  */
  YYSYMBOL_LOGIC_AND = 60,                 /* LOGIC_AND  */
  YYSYMBOL_OR = 61,                        /* OR  */
  YYSYMBOL_XOR = 62,                       /* XOR  */
  YYSYMBOL_AND = 63,                       /* AND  */
  YYSYMBOL_EQEQ = 64,                      /* EQEQ  */
  YYSYMBOL_NEQ = 65,                       /* NEQ  */
  YYSYMBOL_LT = 66,                        /* LT  */
  YYSYMBOL_GT = 67,                        /* GT  */
  YYSYMBOL_LTE = 68,                       /* LTE  */
  YYSYMBOL_GTE = 69,                       /* GTE  */
  YYSYMBOL_SHL = 70,                       /* SHL  */
  YYSYMBOL_SHR = 71,                       /* SHR  */
  YYSYMBOL_PLUS = 72,                      /* PLUS  */
  YYSYMBOL_MINUS = 73,                     /* MINUS  */
  YYSYMBOL_SLASH = 74,                     /* SLASH  */
  YYSYMBOL_MOD = 75,                       /* MOD  */
  YYSYMBOL_INC = 76,                       /* INC  */
  YYSYMBOL_DEC = 77,                       /* DEC  */
  YYSYMBOL_TILDA = 78,                     /* TILDA  */
  YYSYMBOL_EXCLA = 79,                     /* EXCLA  */
  YYSYMBOL_DOT = 80,                       /* DOT  */
  YYSYMBOL_INDIR_AC = 81,                  /* INDIR_AC  */
  YYSYMBOL_INT_CONST = 82,                 /* INT_CONST  */
  YYSYMBOL_CHAR_CONST = 83,                /* CHAR_CONST  */
  YYSYMBOL_FLOAT_CONST = 84,               /* FLOAT_CONST  */
  YYSYMBOL_IDENT = 85,                     /* IDENT  */
  YYSYMBOL_STRING = 86,                    /* STRING  */
  YYSYMBOL_ENUM_CONST = 87,                /* ENUM_CONST  */
  YYSYMBOL_TYPEDEF_NAME = 88,              /* TYPEDEF_NAME  */
  YYSYMBOL_YYACCEPT = 89,                  /* $accept  */
  YYSYMBOL_translation_unit = 90,          /* translation_unit  */
  YYSYMBOL_external_declaration = 91,      /* external_declaration  */
  YYSYMBOL_function_definition = 92,       /* function_definition  */
  YYSYMBOL_declaration = 93,               /* declaration  */
  YYSYMBOL_declaration_list = 94,          /* declaration_list  */
  YYSYMBOL_declaration_specifiers = 95,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 96,   /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 97,            /* type_specifier  */
  YYSYMBOL_type_qualifier = 98,            /* type_qualifier  */
  YYSYMBOL_struct_or_union_specifier = 99, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 100,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 101,  /* struct_declaration_list  */
  YYSYMBOL_init_declarator_list = 102,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 103,          /* init_declarator  */
  YYSYMBOL_struct_declaration = 104,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 105, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 106,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 107,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 108,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 109,          /* enumerator_list  */
  YYSYMBOL_enumerator = 110,               /* enumerator  */
  YYSYMBOL_declarator = 111,               /* declarator  */
  YYSYMBOL_direct_declarator = 112,        /* direct_declarator  */
  YYSYMBOL_pointer = 113,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 114,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 115,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 116,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 117,    /* parameter_declaration  */
  YYSYMBOL_abstract_declarator = 118,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 119, /* direct_abstract_declarator  */
  YYSYMBOL_statement = 120,                /* statement  */
  YYSYMBOL_labeled_statement = 121,        /* labeled_statement  */
  YYSYMBOL_expression_statement = 122,     /* expression_statement  */
  YYSYMBOL_compound_statement = 123,       /* compound_statement  */
  YYSYMBOL_statement_list = 124,           /* statement_list  */
  YYSYMBOL_iteration_statement = 125,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 126            /* jump_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   650

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   343


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    40,    42,    43,    45,    46,    47,    48,
      50,    51,    53,    54,    56,    57,    58,    59,    60,    61,
      63,    64,    65,    66,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    82,    83,    85,
      86,    87,    89,    90,    92,    93,    95,    96,    98,   101,
     103,   104,   105,   106,   108,   109,   111,   115,   116,   117,
     119,   120,   122,   125,   126,   128,   129,   131,   132,   134,
     136,   137,   138,   139,   141,   142,   144,   145,   147,   148,
     150,   151,   152,   167,   168,   169,   171,   173,   175,   176,
     177,   178,   179,   181,   182,   183,   185,   186,   188,   190,
     192,   195,   196,   197,   198,   200,   201,   216,   218,   219,
     220,   221
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "K_AUTO", "K_DOUBLE",
  "K_INT", "K_STRUCT", "K_BREAK", "K_ELSE", "K_LONG", "K_SWITCH", "K_CASE",
  "K_ENUM", "K_REGISTER", "K_TYPEDEF", "K_CHAR", "K_EXTERN", "K_RETURN",
  "K_UNION", "K_CONST", "K_FLOAT", "K_SHORT", "K_UNSIGNED", "K_CONTINUE",
  "K_FOR", "K_SIGNED", "K_VOID", "K_DEFAULT", "K_GOTO", "K_SIZEOF",
  "K_VOLATILE", "K_DO", "K_IF", "K_STATIC", "K_WHILE", "SEMICOLON",
  "O_CBRAK", "C_CBRAK", "COMMA", "EQUALS", "COLON", "O_PAREN", "C_PAREN",
  "O_BRAK", "C_BRAK", "STAR", "TRIP_DOT", "QMARK", "ASIGN", "ASIGN_STAR",
  "ASIGN_SLASH", "ASIGN_MOD", "ASIGN_PLUS", "ASIGN_MINUS", "ASIGN_SHL",
  "ASIGN_SHR", "ASIGN_AND", "ASIGN_XOR", "ASIGN_OR", "LOGIC_OR",
  "LOGIC_AND", "OR", "XOR", "AND", "EQEQ", "NEQ", "LT", "GT", "LTE", "GTE",
  "SHL", "SHR", "PLUS", "MINUS", "SLASH", "MOD", "INC", "DEC", "TILDA",
  "EXCLA", "DOT", "INDIR_AC", "INT_CONST", "CHAR_CONST", "FLOAT_CONST",
  "IDENT", "STRING", "ENUM_CONST", "TYPEDEF_NAME", "$accept",
  "translation_unit", "external_declaration", "function_definition",
  "declaration", "declaration_list", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_list",
  "iteration_statement", "jump_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
#endif

#define YYPACT_NINF (-109)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     301,  -109,  -109,  -109,  -109,  -109,   -31,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
      25,    -4,  -109,  -109,   129,  -109,  -109,  -109,   -27,   487,
     487,   487,  -109,   -23,  -109,   344,   -24,    -6,   -69,    31,
     -21,  -109,  -109,    -4,  -109,  -109,  -109,   -15,  -109,   344,
    -109,  -109,  -109,   533,    36,   172,  -109,   344,   -27,  -109,
     378,    52,   -24,  -109,    13,  -109,   -69,  -109,  -109,  -109,
    -109,    25,   344,  -109,   533,   533,    69,  -109,    25,   533,
      45,    57,    62,    59,    64,    23,  -109,  -109,    75,   215,
    -109,  -109,  -109,  -109,    20,  -109,  -109,  -109,  -109,  -109,
    -109,    73,    67,    79,  -109,  -109,  -109,   -69,    48,  -109,
    -109,  -109,  -109,  -109,  -109,    11,  -109,  -109,   510,  -109,
    -109,  -109,    84,   565,    85,   565,  -109,   543,  -109,  -109,
     250,    77,  -109,    28,  -109,    60,  -109,   409,  -109,  -109,
    -109,    25,  -109,    91,  -109,  -109,  -109,  -109,  -109,    89,
      94,  -109,    60,   456,    83,  -109,  -109,  -109,    97,  -109,
    -109,  -109,    98,  -109,   565,  -109,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    20,    31,    28,    42,    29,     0,    21,    24,    26,
      23,    43,    37,    30,    27,    33,    32,    25,    38,    22,
       0,    70,    65,    36,     0,     2,     4,     5,     0,    15,
      17,    19,    34,     0,    35,     0,    64,     0,     0,    59,
       0,    74,    73,    71,     1,     3,    10,     0,    46,    48,
      14,    16,    18,     0,    41,     0,    12,     0,     0,     8,
       0,     0,    63,    62,     0,    60,     0,    66,    75,    72,
      11,     0,     0,     7,    51,    53,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   104,     0,     0,
     105,    93,    94,    95,     0,    96,    97,    13,     9,    48,
      69,    82,     0,    76,    78,    67,    58,     0,     0,    47,
       6,    50,    52,    40,    45,     0,    54,    56,     0,   110,
     111,   109,     0,     0,     0,     0,   102,     0,   103,   106,
       0,     0,    80,    83,    81,    85,    68,     0,    61,    57,
      49,     0,    39,     0,    99,   108,    98,   101,    92,     0,
       0,    88,    84,     0,     0,    77,    79,    55,     0,    91,
      86,    90,     0,    87,     0,    89,   107
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,   128,  -109,     4,   -43,     0,  -109,    49,   -11,
    -109,  -109,    82,  -109,    92,   -65,   -41,  -109,    15,  -109,
      99,    65,   -19,   -35,   -18,  -109,  -108,  -109,    27,    39,
      33,   -87,  -109,  -109,   111,    93,  -109,  -109
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    56,    57,    58,    29,    30,    31,
      32,    33,    76,    47,    48,    77,    78,   115,   116,    34,
      64,    65,    35,    36,    37,    43,   102,   103,   104,   134,
     135,    90,    91,    92,    93,    94,    95,    96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      28,    40,    62,    42,    27,    38,    72,   129,    46,    49,
      41,   114,    89,    53,    20,    12,    63,    60,    21,    61,
      70,    67,   149,    71,    28,    69,    18,    80,    27,    50,
      51,    52,    68,   111,   112,    20,   144,    81,   146,    99,
     129,    21,    75,    82,    83,   162,   140,    84,    85,   141,
     106,   107,    99,   114,    39,    86,    55,   128,    22,   117,
     101,    97,    54,    75,    75,    75,    20,    66,    75,   130,
      21,   131,    79,     2,     3,     4,    97,   166,     5,    22,
     119,     6,   132,   133,     9,   139,   107,    11,    12,    13,
      14,    15,   120,    97,    16,    17,   105,   121,    62,    18,
     122,   153,    74,   154,   123,    88,   113,    75,   124,   136,
      22,    40,   133,    22,   130,   125,   131,   137,    21,   143,
     145,   151,   117,    74,    74,    74,   158,   163,    74,    44,
     101,   159,     1,     2,     3,     4,   160,   101,     5,   164,
     165,     6,     7,     8,     9,    10,    59,    11,    12,    13,
      14,    15,    45,   101,    16,    17,   157,    23,    22,    18,
      73,   118,    19,   109,   156,   108,   152,    74,    98,   150,
      20,     0,   138,     0,    21,     1,     2,     3,     4,    80,
       0,     5,   127,   110,     6,     7,     8,     9,    10,    81,
      11,    12,    13,    14,    15,    82,    83,    16,    17,    84,
      85,     0,    18,     0,     0,    19,     0,    86,    55,    87,
       0,     0,     0,     0,    22,     0,     0,    23,     1,     2,
       3,     4,    80,     0,     5,     0,     0,     6,     7,     8,
       9,    10,    81,    11,    12,    13,    14,    15,    82,    83,
      16,    17,    84,    85,     0,    18,     0,     0,    19,     0,
      86,    55,   126,     1,     2,     3,     4,    88,     0,     5,
      23,     0,     6,     7,     8,     9,    10,     0,    11,    12,
      13,    14,    15,     0,     0,    16,    17,     0,     0,     0,
      18,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,   130,   148,   131,     0,    21,     0,     0,     0,     0,
      88,     0,     0,    23,     1,     2,     3,     4,     0,     0,
       5,     0,     0,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,     0,     0,    16,    17,     0,     0,
       0,    18,     0,     0,    19,    22,     0,     0,    23,     0,
       0,     0,    20,     0,     0,     0,    21,     1,     2,     3,
       4,     0,     0,     5,     0,     0,     6,     7,     8,     9,
      10,     0,    11,    12,    13,    14,    15,     0,     0,    16,
      17,     0,     0,     0,    18,     0,     0,    19,     0,     0,
      55,     1,     2,     3,     4,     0,    22,     5,     0,    23,
       6,     7,     8,     9,    10,     0,    11,    12,    13,    14,
      15,     0,     0,    16,    17,     0,     0,     0,    18,     0,
       0,    19,     1,     2,     3,     4,     0,     0,     5,     0,
     100,     6,     7,     8,     9,    10,     0,    11,    12,    13,
      14,    15,    23,     0,    16,    17,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   155,     0,     0,     0,     1,
       2,     3,     4,     0,     0,     5,    23,     0,     6,     7,
       8,     9,    10,     0,    11,    12,    13,    14,    15,     0,
       0,    16,    17,     0,     0,     0,    18,     0,     0,    19,
       1,     2,     3,     4,     0,     0,     5,    23,   161,     6,
       7,     8,     9,    10,     0,    11,    12,    13,    14,    15,
       0,     0,    16,    17,     2,     3,     4,    18,     0,     5,
      19,     0,     6,     0,     0,     9,     0,     0,    11,    12,
      13,    14,    15,     0,     0,    16,    17,     2,     3,     4,
      18,     0,     5,     0,    23,     6,     0,   142,     9,     0,
      80,    11,    12,    13,    14,    15,     0,     0,    16,    17,
      81,     0,     0,    18,     0,     0,    82,    83,     0,     0,
      84,    85,    80,     0,     0,    23,     0,     0,    86,    55,
     147,     0,    81,     0,     0,     0,     0,     0,    82,    83,
       0,     0,    84,    85,     0,     0,     0,     0,    23,     0,
      86,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88
};

static const yytype_int16 yycheck[] =
{
       0,    20,    37,    21,     0,    36,    49,    94,    35,    28,
      21,    76,    55,    36,    41,    19,    85,    41,    45,    43,
      35,    42,   130,    38,    24,    43,    30,     7,    24,    29,
      30,    31,    43,    74,    75,    41,   123,    17,   125,    58,
     127,    45,    53,    23,    24,   153,    35,    27,    28,    38,
      37,    38,    71,   118,    85,    35,    36,    37,    85,    78,
      60,    57,    85,    74,    75,    76,    41,    36,    79,    41,
      45,    43,    36,     4,     5,     6,    72,   164,     9,    85,
      35,    12,   101,   101,    15,    37,    38,    18,    19,    20,
      21,    22,    35,    89,    25,    26,    44,    35,   133,    30,
      41,    41,    53,    43,    40,    85,    37,   118,    85,    42,
      85,   130,   130,    85,    41,    40,    43,    38,    45,    35,
      35,    44,   141,    74,    75,    76,    35,    44,    79,     0,
     130,    42,     3,     4,     5,     6,    42,   137,     9,    42,
      42,    12,    13,    14,    15,    16,    35,    18,    19,    20,
      21,    22,    24,   153,    25,    26,   141,    88,    85,    30,
      49,    79,    33,    71,   137,    66,   133,   118,    57,   130,
      41,    -1,   107,    -1,    45,     3,     4,     5,     6,     7,
      -1,     9,    89,    72,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    88,     3,     4,
       5,     6,     7,    -1,     9,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    -1,    -1,    33,    -1,
      35,    36,    37,     3,     4,     5,     6,    85,    -1,     9,
      88,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    -1,    45,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    88,     3,     4,     5,     6,    -1,    -1,
       9,    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    -1,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    33,    85,    -1,    -1,    88,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,     3,     4,     5,
       6,    -1,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    -1,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,
      36,     3,     4,     5,     6,    -1,    85,     9,    -1,    88,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      42,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    88,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    88,    -1,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    -1,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,
       3,     4,     5,     6,    -1,    -1,     9,    88,    42,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    25,    26,     4,     5,     6,    30,    -1,     9,
      33,    -1,    12,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    25,    26,     4,     5,     6,
      30,    -1,     9,    -1,    88,    12,    -1,    37,    15,    -1,
       7,    18,    19,    20,    21,    22,    -1,    -1,    25,    26,
      17,    -1,    -1,    30,    -1,    -1,    23,    24,    -1,    -1,
      27,    28,     7,    -1,    -1,    88,    -1,    -1,    35,    36,
      37,    -1,    17,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    88,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    12,    13,    14,    15,
      16,    18,    19,    20,    21,    22,    25,    26,    30,    33,
      41,    45,    85,    88,    90,    91,    92,    93,    95,    96,
      97,    98,    99,   100,   108,   111,   112,   113,    36,    85,
     111,    98,   113,   114,     0,    91,    35,   102,   103,   111,
      95,    95,    95,    36,    85,    36,    93,    94,    95,   123,
      41,    43,   112,    85,   109,   110,    36,    42,    98,   113,
      35,    38,    94,   123,    97,    98,   101,   104,   105,    36,
       7,    17,    23,    24,    27,    28,    35,    37,    85,    94,
     120,   121,   122,   123,   124,   125,   126,    93,   123,   111,
      42,    95,   115,   116,   117,    44,    37,    38,   109,   103,
     123,   105,   105,    37,   104,   106,   107,   111,   101,    35,
      35,    35,    41,    40,    85,    40,    37,   124,    37,   120,
      41,    43,   111,   113,   118,   119,    42,    38,   110,    37,
      35,    38,    37,    35,   120,    35,   120,    37,    42,   115,
     118,    44,   119,    41,    43,    46,   117,   107,    35,    42,
      42,    42,   115,    44,    42,    42,   120
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    89,    90,    90,    91,    91,    92,    92,    92,    92,
      93,    93,    94,    94,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   104,
     105,   105,   105,   105,   106,   106,   107,   108,   108,   108,
     109,   109,   110,   111,   111,   112,   112,   112,   112,   112,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   118,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   120,   120,   120,   121,   121,
     122,   123,   123,   123,   123,   124,   124,   125,   126,   126,
     126,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     3,     2,     3,
       2,     3,     1,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     1,     2,     1,     3,     1,     3,
       2,     1,     2,     1,     1,     3,     1,     5,     4,     2,
       1,     3,     1,     2,     1,     1,     3,     3,     4,     3,
       1,     2,     3,     2,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     2,     1,     3,     3,     2,     4,
       3,     3,     2,     1,     1,     1,     1,     1,     3,     3,
       1,     4,     3,     3,     2,     1,     2,     6,     3,     2,
       2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1650 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

