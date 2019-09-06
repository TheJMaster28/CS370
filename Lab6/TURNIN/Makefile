# Jeffrey Lansford
# Lab 6 
# March 15, 2019 
# makefile to compile Yacc file with the lex file and ast.c 
all:
	yacc -d -v lab6.y 
	lex lab6.l
	gcc lex.yy.c y.tab.c ast.c -o lab6
