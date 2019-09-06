#Jeffrey Lansford
#Lab2.2
#January 25, 2019
#1: y.tab.c
#2: lex.yy.c
#3: Becuase the YACC routine has includes the lex.yy.c file produced 
#   from the LEX
all:
	# complies the yacc and lex routine
	yacc -d lab2docalc.y
	lex lab2docalc.l
	# compiles the YACC output with the LEX output
	gcc y.tab.c -o lab2docalc
