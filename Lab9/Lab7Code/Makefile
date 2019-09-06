# Jeffrey Lansford
# Lab 7 
# April 9, 2019 
# makefile to compile Yacc file with the lex file and ast.c and symtable.c 
all:
	yacc -d -v lab7.y 
	lex lab7.l
	gcc lex.yy.c y.tab.c symtable.c ast.c -o lab7
