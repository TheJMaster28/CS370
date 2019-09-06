%{

/*
 *			**** CALC ****
 *
 * This routine will function like a desk calculator
 * There are 26 integer registers, named 'a' thru 'z'
 *
 */

/* This calculator depends on a LEX description which outputs either VARIABLE or INTEGER.
   The return type via yylval is integer 

   When we need to make yylval more complicated, we need to define a pointer type for yylval 
   and to instruct YACC to use a new type so that we can pass back better values
 
   The registers are based on 0, so we substract 'a' from each single letter we get.

   based on context, we have YACC do the correct memmory look up or the storage depending
   on position

   Shaun Cooper
    January 2015

   problems  fix unary minus, fix parenthesis, add multiplication
   problems  make it so that verbose is on and off with an input argument instead of compiled in
*/

/*
Jeffrey Lansford
CS 370
Lab 4
Febuaruy 7, 2019
Modified Lab2.2 to now implement a Symble table and creates full string Variables. Defined a MAX for the memory regs[]
*/

	/* begin specs */
#include <stdio.h>
#include <ctype.h>
#include "lex.yy.c"
#include "symtable.c"
#define MAX 2
int regs[MAX];
int base, debugsw;
int count = 0;
void yyerror (s)  /* Called by yyparse on error */
     char *s;
{
  printf ("%s\n", s);
}


%}
/*  defines the start symbol, what values come back from LEX and how the operators are associated  */

%start P
%union {
	int value;
	char *string;
}

%token <value> INTEGER
%token INT
%token <string> VARIABLE
%type <value> expr 
%left '|'
%left '&'
%left '+' '-'
%left '*' '/' '%'
%left UMINUS
%left VARIABLE


%%	/* end specs, begin rules */

P       :   DECLS list
        ;

DECLS   :   /* empty */ 
    	|   DECLS DECL
        ;
        
DECL	:	INT VARIABLE ';''\n'
            { if ( Search($2) == -1 && count < MAX) {
                Insert($2, count );
                count ++;
                Display();
                /* checks if VARIABLE is in Symtable then inserts into table */
                }
              else { if ( count >= MAX ) fprintf(stderr,"Error: Max number of variables reached:%d\n",MAX); 
                     else fprintf(stderr,"Error: Unkown variable found\n"); 
              /* error if it is table or reached MAX */}
                
            }
        ;
        
list	:	/* empty */
	|	list stat '\n'
	|	list error '\n'
			{ yyerrok; }
	;
	


stat	:	expr
			{ fprintf(stderr,"the anwser is %d\n", $1); }
	|	VARIABLE '=' expr
			{ if ( Search($1) != -1 ) {
                regs[Search($1)] = $3; 
                /* gets offset to go to memory address and stores expr into that address */ 
                }
                else {
                    fprintf (stderr, "Error: Unkown variable found\n");
                    }
            }
	;

expr	:	'(' expr ')'
			{ $$ = $2; }
	|	expr '-' expr
			{ $$ = $1 - $3; }
	|	expr '+' expr
			{ $$ = $1 + $3; }
	|	expr '/' expr
			{ $$ = $1 / $3; }
    	|       expr '*' expr
                        { $$ = $1 * $3; /* added multiplication */}
	|	expr '%' expr
			{ $$ = $1 % $3; }
	|	expr '&' expr
			{ $$ = $1 & $3; }
	|	expr '|' expr
			{ $$ = $1 | $3; }
	|	'-' expr	%prec UMINUS
			{ $$ = -$2; /* fixed UMINUS to have it work correctly */}
	|	VARIABLE
			{ if (Search($1) != -1 ) { 
                $$ = regs[Search($1)]; fprintf(stderr,"found a variable value = %s\n",$1);
                /* fetches what is in memory(regs[]) and sends back stat */
                }
              else {
                fprintf(stderr, "Error: Unkown variable found\n");
                $$ = 0;
                }
            }
	|	INTEGER { $$=$1; fprintf(stderr,"found an integer\n");}
	;




%%	/* end of rules, start of program */

main()
{ yyparse();
}
