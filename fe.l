%%
"int"|"float"|"string" {return DATA_TYPE;}
"begin" {return BEGIN;}
"end" {return END;}
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

[_a-zA-Z][_a-zA-Z0-9]* {yylval.strval=strdup(yytext); return VARIABLE;}
[0-9]+ {yylval.intval=atoi(yytext); return NUMBER;}
. {return yytext[0];}