/*                 Small LEX routine which returns two formal tokens (INTEGER and VARIABLE)
                   along with single string elements like '+'.
 
                    This LEX definition is the companion to the docalc.y YACC routine which
                   is a simple calculator

                    Shaun Cooper
                    January 2015
*/

/*
Jeffrey Lansford
CS 370
Lab 4
Febuary 15, 2019
LEX routine to created tokens for YACC, extended from Lab 2.2. Added INT token for variable declaration. Extended VARIABLE rules to accpect Strings 
start with letters and followed by leters or numbers or none. 
*/
%{

int mydebug=0;
#include "y.tab.h"
%}


%%

int                         { if (mydebug) fprintf(stderr,"INT found\n"); return (INT); /* return token INT for variable declartion */}

[a-zA-Z][a-zA-Z0-9]*		{if (mydebug) fprintf(stderr,"Letter found\n"); 
                       yylval.string =strdup(yytext); return(VARIABLE);}
[0-9][0-9]*	{if (mydebug) fprintf(stderr,"Digit found\n"); 
                       yylval.value=atoi((const char *)yytext); return(INTEGER);}
[ \t]		{if (mydebug) fprintf(stderr,"Whitespace found\n");}
[=\-+*/%&|();] 	{ if (mydebug) fprintf(stderr,"return a token %c\n",*yytext); 
                       return (*yytext);/* added parentheses to be read */}
\n 		{ if (mydebug) fprintf(stderr,"cariage return %c\n",*yytext); 
                       return (*yytext);}

%%

int yywrap(void)
{ return 1;}


