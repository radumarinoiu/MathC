yacc -d -v mathc.y
lex -ll mathc.l
gcc lex.yy.c y.tab.c -lfl -ly -o mathc
./mathc test
