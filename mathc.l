%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}


%%

"begin" { return start_decl;}
"enddefines" { return end_defines;}
"end" { return end_instr;}

"INT" { return INTEGER;}
"CHAR" { return CHR;}
"FLOAT" { return FLOAT;}
"BL" { return BOOL;}
"CONST" { return CONST;}


"STRUCT" { return STRUCT;}

"PRINT" { return print;}
"FOR" { return FOR;}
"IF" { return IF;}
"ELSE" { return ELSE;}
"WHILE" { return WHILE;}
"RETURN" { return RETURN;}

"TRUE"|"FALSE" { yylval.val=atoi(yytext); return BOOL_VAL;}
\'[\^\-\\!@#$%^&*()+~`?=_{};:'"|/.,><a-zA-Z0-9]\' { yylval.val=yytext[1]; return CHR_VAL;}
[0-9]+ { yylval.val=atoi(yytext); return INTEGER_VAL;}
[0-9]*\.?[0-9]+ { yylval.val=atof(yytext); return FLOAT_VAL;}


[A-Za-z][a-zA-Z0-9_]* { yylval.nume=strdup(yytext); return ID;}
[A-Za-z][a-zA-Z0-9_]*\[[1-9][0-9]*\]\[[1-9][0-9]*\] {{ yylval.nume=strdup(yytext); return matr;}}
[A-Za-z][a-zA-Z0-9_]*"["[0-9]*"]" {{ yylval.nume=strdup(yytext); return vect;}}



"+" {return pls;}
"-" { return min;}
"*" { return ori;}
"\\" { return slsh;}
"%" { return mod;}
"&&" { return AND;}
"||" { return OR;}
"==" { return EQ;}
"!=" { return NEQ;}
">"  { return GRE;}
"<"  { return LES;}
">=" { return GEQ;}
"<=" { return LEQ;}
"=" { return ASSIGN;}
"!" { return NOT;}
"(" { return sprnt;}
")" { return dprnt;}
"{" { return sacoal;}
"}" { return dacoal;}
"." { return pnct;}
"," { return vir;}
";" { return pnctvir;}


[ \t] ;
\n {;}
. {printf("%s \n",yytext); return yytext[0];}

%%

