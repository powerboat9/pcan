%{
#include <stdio.h>
%}

auto		return K_AUTO;
double		return K_DOUBLE;
int		return K_INT;
struct		return K_STRUCT;
break		return K_BREAK;
else		return K_ELSE;
long		return K_LONG;
switch		return K_SWITCH;
case		return K_CASE;
enum		return K_ENUM;
register	return K_REGISTER;
typedef		return K_TYPEDEF;
char		return K_CHAR;
extern		return K_EXTERN;
return		return K_RETURN;
union		return K_UNION;
const		return K_CONST;
float		return K_FLOAT;
short		return K_SHORT;
unsigned	return K_UNSIGNED;
continue	return K_CONTINUE;
for		return K_FOR;
signed		return K_SIGNED;
void		return K_VOID;
default		return K_DEFAULT;
goto		return K_GOTO;
sizeof		return K_SIZEOF;
volatile	return K_VOLATILE;
do		return K_DO;
if		return K_IF;
static		return K_STATIC;
while		return K_WHILE;

";"		return SEMICOLON;
"{"		return O_CBRAK;
"}"		return C_CBRAK;
","		return COMMA;
"="		return EQUALS;
":"		return COLON;
"("		return O_PAREN;
")"		return C_PAREN;
"["		return O_BRAK;
"]"		return C_BRAK;
"*"		return STAR;
"..."		return TRIP_DOT;
"?"		return QMARK;

"*="		return ASIGN_STAR;
"/="		return ASIGN_SLASH;
"%="		return ASIGN_MOD;
"+="		return ASIGN_PLUS;
"-="		return ASIGN_MINUS;
"<<="		return ASIGN_SHL;
">>="		return ASIGN_SHR;
"&="		return ASIGN_AND;
"^="		return ASIGN_XOR;
"|="		return ASIGN_OR;

"||"		return LOGIC_OR;
"&&"		return LOGIC_AND;
"|"		return OR;
"^"		return XOR;
"&"		return AND;
"=="		return EQEQ;
"!="		return NEQ;
"<"		return LT;
">"		return GT;
"<="		return LTE;
">="		return GTE;
"<<"		return SHL;
">>"		return SHR;
"+"		return PLUS;
"-"		return MINUS;
"/"		return SLASH;
"%"		return MOD;
"++"		return INC;
"--"		return DEC;
"~"		return TILDA;
"!"		return EXCLA;
"."		return DOT;
"->"		return INDIR_AC;

0x
