yacc -d lfac.y
lex -ll lfac.l
gcc lex.yy.c y.tab.c -lfl -ly -o exe
./exe test
