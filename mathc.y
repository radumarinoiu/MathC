%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libs/mylib.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex (void);
%}

%union {
     int iVal;
     float fVal;
     char* sPtr;
}

%token DATA_TYPE START END MAIN RETURN FOR EFOR WHILE EWHILE IF ELSE FI PRINT 

%token <sPtr> VARIABLE
%token <sPtr> ARRAY

%token <iVal> NUMBER
%token <sPtr> STRING
%token <iVal> BOOL

%token <sPtr> expression

%start begin

%%

begin: block {printf("\nCORECT\n");}
    ;

block: START statement END
    ;

statement: DATA_TYPE VARIABLE
    | DATA_TYPE ARRAY
    | NUMBER
    | STRING
    | BOOL
    | statement statement
    ;
%%

int yyerror(char * s){
printf("E: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
    if(argc>0)
yyin=fopen(argv[1],"r");
yyparse();
} 
