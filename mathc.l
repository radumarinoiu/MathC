%{
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include "y.tab.h"
#include "libs/mylib.h"
void yyerror(char *);
%}

%option yylineno

%%
"int"|"float"|"string" {return DATA_TYPE;}
"{" {return START;}
"}" {return END;}
"main" {return MAIN;}
"return" {return RETURN;}
"for" {return FOR;}
"efor" {return EFOR;}
"while" {return WHILE;}
"ewhile" {return EWHILE;}
"if" {return IF;}
"else" {return ELSE;}
"fi" {return FI;}
"print" {return PRINT;}

[_a-zA-Z][_a-zA-Z0-9]* {yylval.sPtr=strdup(yytext); return VARIABLE;}
[_a-zA-Z][_a-zA-Z0-9]*\[[1-9][0-9]*\] {yylval.sPtr=strdup(yytext); return ARRAY;}
[0-9]+ {yylval.iVal=atoi(yytext); return NUMBER;}
\"[^\"]*\" {yylval.sPtr=strdup(yytext); return STRING;}
"TRUE"|"FALSE" {yylval.iVal=parse_bool(yytext); return BOOL;}

[ \n] {}
[ \t] ;
. {return yytext[0];}

%%