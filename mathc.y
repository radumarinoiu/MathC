%{
#include "libs/mylib.h"
#include <stdio.h>
#include <string.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex (void);
%}
%nonassoc IFX
%nonassoc ELSE
%token start_decl INTEGER CHR FLOAT BOOL ID vect matr STRUCT CONST
%token pls min ori slsh verf mod ASSIGN AND OR INCR NOT 
%token sprnt dprnt sacoal dacoal pnct vir pnctvir
%token end_defines end_instr IF WHILE ELSE FOR RETURN print
%token INTEGER_VAL FLOAT_VAL CHR_VAL BOOL_VAL
%union {int val; char val_ch; char *nume; }
%type<nume>ID
%type<val>INTEGER_VAL
%type<val>expr
%type<val>expr3
%type<val>FLOAT_VAL
%type<val>CHR_VAL
%type<val>BOOL_VAL
%type<nume>vect
%type<nume>matr
%left OR
%left AND
%left EQ NEQ LEQ GEQ GRE LES
%left pls min
%left ori mod slsh
%start programul

%%

programul: declaratii end_defines instructiuni { 
            
            decode_error(); 
            if(error==0) {
                print_var(); 
                printf("%s",toPrint);
            }
        }
        ;

declaratii: start_decl declaratiile
          | start_decl
          ;

declaratiile: concret_dec pnctvir
    | fct_bloc
    | struct_dec
    | declaratiile  concret_dec pnctvir
    | declaratiile struct_dec
    | declaratiile fct_bloc
	;




struct_dec: struct struct_body struct_identif pnctvir {structVar--;}
          ;

struct: STRUCT ID {insert_struct($2,"global_struct"); structVar++;}
      ;
    
struct_identif: ID {insert_var($1,0,"struct","struct_var");}
             |vect 
             |matr 
             |struct_identif vir ID {insert_var($3,0,"struct","struct_var");}
             |struct_identif vir vect {insert_var($3,0,"vector struct","struct_var");}
             |struct_identif vir matr {insert_var($3,0,"matrice struct","struct_var");}
             | 
             ;

struct_body: sacoal declaratiile dacoal
           ;
    
fct_bloc: fct_dec fct_body;

fct_body: sacoal statements dacoal 
        | pnctvir
        ;

fct_dec: fct sprnt arg_list dprnt  
       ;

fct: INTEGER ID  {insert_f($2,"int","global_function");} 
   | FLOAT ID {insert_f($2,"float","global_function");} 
   | CHR ID {insert_f($2,"char","global_function");} 
   | BOOL ID {insert_f($2,"bool","global_function");} 
   ;

concret_dec: INTEGER ID {insert_var($2,0,"int","global");} 
        | INTEGER ID ASSIGN INTEGER_VAL {insert_var($2,$4,"int","global");}
        | FLOAT ID {insert_var($2,0,"float","global");}
        | FLOAT ID ASSIGN FLOAT_VAL {insert_var($2,$4,"float","global");}
        | CHR ID {insert_var($2,0,"char","global");}
        | CHR ID ASSIGN CHR_VAL {insert_var($2,$4,"char","global");}
        | BOOL ID {insert_var($2,0,"bool","global");}
        | BOOL ID ASSIGN BOOL_VAL {insert_var($2,$4,"bool","global");}
        | INTEGER matr {insert_var($2,0,"matrice int","global");}
        | FLOAT matr {insert_var($2,0,"matrice float","global");}
        | CHR matr {insert_var($2,0,"matrice char","global");}
        | BOOL matr {insert_var($2,0,"matrice bool","global");}
        | INTEGER vect {insert_var($2,0,"vector int","global");}
        | FLOAT vect {insert_var($2,0,"vector float","global");}
        | CHR vect {insert_var($2,0,"vector char","global");}
        | BOOL vect {insert_var($2,0,"vector bool","global");}
	    ;

    


arg_list: INTEGER ID {insert_var($2,0,"int","funct_arg");}
        | FLOAT ID {insert_var($2,0,"float","funct_arg");}
        | CHR ID {insert_var($2,0,"char","funct_arg");}
        | BOOL ID {insert_var($2,0,"bool","funct_arg");}
        | INTEGER matr {insert_var($2,0,"matrice int","funct_arg");}
        | FLOAT matr {insert_var($2,0,"matrice float","funct_arg");}
        | CHR matr {insert_var($2,0,"matrice char","funct_arg");}
        | BOOL matr {insert_var($2,0,"matrice bool","funct_arg");}
        | INTEGER vect {insert_var($2,0,"vector int","funct_arg");}
        | FLOAT vect {insert_var($2,0,"vector float","funct_arg");}
        | CHR vect {insert_var($2,0,"vector char","funct_arg");}
        | BOOL vect {insert_var($2,0,"vector bool","funct_arg");}
        | arg_list vir INTEGER ID {insert_var($4,0,"int","funct_arg");}
        | arg_list vir FLOAT ID {insert_var($4,0,"float","funct_arg");}
        | arg_list vir CHR ID {insert_var($4,0,"char","funct_arg");}
        | arg_list vir BOOL ID {insert_var($4,0,"bool","funct_arg");}
        | arg_list vir INTEGER matr {insert_var($4,0,"matrice int","funct_arg");}
        | arg_list vir FLOAT matr {insert_var($4,0,"matrice float","funct_arg");}
        | arg_list vir CHR matr {insert_var($4,0,"matrice char","funct_arg");}
        | arg_list vir BOOL matr {insert_var($4,0,"matrice bool","funct_arg");}
        | arg_list vir INTEGER vect {insert_var($4,0,"vector int","funct_arg");}
        | arg_list vir FLOAT vect {insert_var($4,0,"vector float","funct_arg");}
        | arg_list vir CHR vect {insert_var($4,0,"vector char","funct_arg");}
        | arg_list vir BOOL vect {insert_var($4,0,"vector bool","funct_arg");}
        | 
        ;
        


instructiuni: statements end_instr
            | end_instr
            ;
    
statements: statements statement
        | statement  
        ;
        
statement: if_stat  
        | for_stat
        | while_stat
        | assign pnctvir
        | val_struct pnctvir
        | RETURN expr pnctvir 
        | PRINTEGER pnctvir
        | function pnctvir
        ;


    
val_struct:ID pnct ID ASSIGN expr {check_struct($1,1); check_struct($3,2); updateVal($3,$5);}
        ; 
        
PRINTEGER: print sprnt INTEGER vir expr dprnt {char buff[50]=""; sprintf(buff,"%d\n",$5); strcat(toPrint,buff);}
        | print sprnt CHR vir expr dprnt {char buff[50]=""; sprintf(buff,"%c\n",$5);strcat(toPrint,buff);}
        | print sprnt FLOAT vir expr dprnt {char buff[50]=""; sprintf(buff,"%4.2f\n",$5);strcat(toPrint,buff);}
        | print sprnt BOOL vir expr dprnt {char buff[50]=""; sprintf(buff,"%d\n",$5);strcat(toPrint,buff);}
        ;
      
function: ID sprnt argum dprnt 
    ;
    
argum: expr 
    | argum vir expr
    | 
    ;
    
if_stat: IF sprnt expr dprnt bloc_stat %prec IFX 
       | IF sprnt expr dprnt bloc_stat ELSE bloc_stat
       ;

for_stat: FOR sprnt assign vir expr vir assign dprnt bloc_stat 
    ;
    
while_stat: WHILE sprnt expr dprnt bloc_stat 
    ;

bloc_stat: statement 
    | sacoal statements dacoal 
    ;

expr: expr pls expr {$$=$1+$3; }
    | expr min expr {$$=$1-$3; }
    | expr slsh expr {$$=$1/$3; }
    | expr ori expr {$$=$1*$3; }
    | expr mod expr {$$=$1%$3; }
    | expr EQ expr {$$=$1==$3; }
    | expr NEQ expr {$$=$1!=$3; }
    | expr LEQ expr {$$=$1<=$3; }
    | expr GEQ expr {$$=$1>=$3; }
    | expr LES expr {$$=$1<$3; }
    | expr GRE expr {$$=$1>$3; }
    | expr AND expr {$$=$1 && $3; }
    | expr OR expr {$$=$1 || $3; }
    | sprnt expr dprnt {$$=$2;}
    | expr3 {$$=$1;}
    ;
    
    
expr3:ID {check_existence($1); $$=getVal($1);}
    | sign ID {check_existence($2); $$=-getVal($2);}
    | ID pnct ID { check_struct($1,1); check_struct($3,2); $$=getVal($3);} 
    | vect {check_existence($1);}
    | matr {check_existence($1);}
    | INTEGER_VAL { $$=$1;}
    | FLOAT_VAL { $$=$1; }
    | CHR_VAL { $$=$1; }
    | BOOL_VAL { $$=$1; }
    ;
        
sign: min 
    ; 

assign: ID ASSIGN expr {check_existence($1); updateVal($1,$3); }
    | matr ASSIGN expr {check_existence($1);}
    | vect ASSIGN expr {check_existence($1);}
    ;
    
%%


int yyerror(char * s){
printf("EROARE!: %s a aparut la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
    if(argc>0)
yyin=fopen(argv[1],"r");
yyparse();
} 