Jeffrey Lansford
Lab 4
February 15, 2019

I have updated the Yacc program to extend the CF grammer to accpect (int VARIABLE;) and the lex program to match names that can be strings and returns a new token INT. Created union type in yacc to allow Lex return a string or an integer. Lex copies the yytext to send to yacc when VARIABLE matches. Added new semantic directives for when VARIABLE is matched to check symtable for names. Modified symtable.c to have it insert names and offset, search to return the offset when it has found the varible.   
