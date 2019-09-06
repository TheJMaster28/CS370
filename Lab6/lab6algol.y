%{
/*
 *			**** CMINUS ****
 *
 *
 */

/* 
   This lab is designed for you to create YACC directives using the EBNF description of Cminus.

   You are to take the EBNF of ALGOL and create YACC rules that will syntically check if an input
   program is syntactically correct.  You DO NOT have to do any type checking or any checking if an ID 
   has been defined.  

   The nice part of YACC is that it will do the checking for you as long as you define things correctly.
   You will need to report any syntax errors on the appropriate line.  If possible, you should have YACC
    continue with the parsing until end of file

   You will need to ensure that you define your tokens properly and with the correct return values.

   Shaun Cooper
    January 2015
    January 2019


   THIS IS A TRUNCATED VERSION OF THE ALGOL EBNF in YACC

*/


	/* begin specs */
#include <stdio.h>
#include <ctype.h>
#include "ast.h"


int linecount; // set by LEX routine

void yyerror (s)  /* Called by yyparse on error */
     char *s;
{
  printf ("%s on line %d\n", s, linecount);
}

enum OPERATORS Cur_Type; // used to maintain type during type variable declaration


%}
/*  defines the start symbol, what values come back from LEX and how the operators are associated  */

%start P

%union {
      int value;
      char * string;
      ASTnode * node;
      enum OPERATORS operator;
      
}



%token <value> NUM INT VOID WHILE DO IF THEN ELSE READ WRITE FOR RETURN LE GE EQ NE LT GT
%token  <string> ID 
%token MYBEGIN MYEND OF BOOLEAN
%token AND OR NOT MYTRUE 
%type <operator> relop addop 


%left '|'
%left '&'
%left '+' '-'
%left '*' '/' '%'
%left UMINUS


%%	/* end specs, begin rules */

P	:	DL   /* PRogram -> Declartion-list */
                {program=$1;}
	;

DL	:	DEC  { $$=$1;}   /*  Declaration-list -> Declaration { Declaration} */
        |      DEC DL   {$1->next=$2; $$= $1; /*next connect declarations */
                        if (mydebug)  ASTprint(0,$1);
                        if (mydebug) ASTprint(0,$2);
                       }
        ;

DEC	: VARDEC  {$$=$1;} 
        | FUNDEC  {$$=$1;} /*  Declaration -> Variable-Declaration | Function-Declaration */
        ;

VARDEC	: typespec varlist  ';' {$$ = $2;}  ;
       


varlist: ID   { /* search symbol table for ID
                              insert if OK, then add the pointer from 
                              insertion into the  ASTnode to have reference
                              to the symbol table entry */
                            $$=ASTCreateNode(VARDEC); 
                            $$->operator=Cur_Type;
                            $$->name=$1; /* this changes to symbol table*/
                           } 
 	|  ID  '[' NUM ']' 
                  { /* search symbol table for ID, if not, place in there with size of array*/

                            $$=ASTCreateNode(VARDEC); 
                            $$->name=$1; /* this changes to symbol table*/
                            $$->operator=Cur_Type;
                            $$->value=$3; /* remember dimension*/
                            printf("found an array declaration \n");
                  }
        | ID ',' varlist  
 	|  ID  '[' NUM ']'  ',' varlist
                         
        ;

typespec	: INT  {$$=INTTYPE; Cur_Type=$$;}
                | VOID 
                | BOOLEAN 
                ;

FUNDEC	:  typespec ID '(' params ')' compoundstmt
                         { /* search symbol table for ID
                              insert if OK, then add the pointer from 
                              insertion into the  ASTnode to have reference
                              to the symbol table entry */

                            /* need to add paramater listing */
                            $$=ASTCreateNode(FUNCTIONDEC); 
                            $$->name=$2; /* this changes to symbol table*/
                            $$->operator=$1; /* remember the declaration type */
                           } 

                   
        ;

params	: VOID  { $$=NULL; /*no paramater list */}
        |  paramlist { $$= $1;}
        ;

 
/*  Parmlist is a next list of parameters, name and type are the node itself no s1 parameter */

paramlist	: param  { $$ = $1;}
                | param ', paramlist 
              	;

param	:	typespec ID { /* symbol table function level add/check */
                              $$=ASTCreateNode(PARAM);
                              $$->name=$2; 
                              $$->operator=$1;
                              $$->value=0; /* not an array */
                            }
	|	typespec ID '[' ']'
	;

   /* need to fix this to include local declarations into symbol table*/
compoundstmt : MYBEGIN localdeclarations statementlist MYEND  
                      {  $$=ASTCreateNode(BLOCK);
                             $$->s1=$2;
                             $$->s2=$3;
                       }
 	      ;

localdeclarations :  VARDEC localdeclarations {$1->next=$2; $$=$1;}
                  | /* empty */ { $$=NULL;}
                   ;

/* for statements , next is the next statement, s1 is what this statement is */
statementlist :  /* empty */ {$$=NULL;}
              | statement statementlist 
              ;

statement : 	expressionstmt  
		| compoundstmt	
		| selectionstmt	
		| iterationstmt	
		| assignmentstmt
		| returnstmt	
		| readstmt	
		| writestmt     
                ;

expressionstmt : expression ';'  { $$=ASTCreateNode(EXPRSTMT);
                                  $$->s1=$1;}
		| ';'  { $$=NULL;}
 		;

assignmentstmt : var '=' expressionstmt 
                      {$$=ASTCreateNode(ASSIGN);
                          /* Assignment statement  we leave next alone so that
                             it can be strung with other statements	*/ 
                      }
               ;




selectionstmt : IF  expression THEN statement 
               | IF  expression THEN statement ELSE statement 
               ;

iterationstmt : WHILE  expression DO statement
                               {$$=ASTCreateNode(WHILESTMT);
                                $$->s1=$2;
                                $$->s2=$4;}
               ;

returnstmt : RETURN ';'  { $$=ASTCreateNode(MYRETURN);}
            |  RETURN expression  ';'  { $$=ASTCreateNode(MYRETURN);
                                         $$->s1=$2;}
            ;

readstmt : READ var ';' { /* make sure variable is in symbol table */
                        }
          ;


writestmt : WRITE expression ';' 
          ;


expression :   simpleexpression {$$=$1;}
           ;


var	: ID   
                /* we want to create a NODE called IDENTIFIER with a pointer to the SYMBOL table */
               { $$=ASTCreateNode(IDENT);
	         $$->name=$1; /*change this to pointer to symbol table */
		 }
                 
	| ID  '[' expression ']'
    	;


simpleexpression : additiveexpression  {$$=$1;}
                  | additiveexpression relop additiveexpression 
                       {$$=ASTCreateNode(EXPR);
                        $$->s1=$1;
                        $$->s2=$3;
                        $$->operator=$2;}
        
                  ;


relop : LE {$$=LESSTHANEQUAL;}
      ;

additiveexpression : term  {$$=$1;}
                    | additiveexpression addop term  
                    ;

addop : '+'  {$$=PLUS;}
      | '-'  {$$=MINUS;}
      ;

term : factor  {$$=$1;}
     | term  multop factor 
     | term  AND factor 
     | term  OR factor 
     ;

multop : '*' {$$=TIMES;}
       ;

factor : '(' expression ')'  {$$=$2;}
       | NUM  
               { $$=ASTCreateNode(NUMBER);
                $$->value=$1;
		 }
       | var  
       | call 
       | NOT factor 
               { $$=ASTCreateNode(EXPR);
                $$->operator=MYNOT;
                $$->s1=$2;
		 }
       | MYTRUE
               { $$=ASTCreateNode(NUMBER);
                $$->value=1;
	       }
       | MYFALSE
       ;

call : ID '(' args ')' 
          { $$=ASTCreateNode(CALL);
            $$->s1=$3;
            $$->name=$1;  /*symbol table check */
          }
     ;

args : arglist {$$=$1;}
      | {$$=NULL;} /* empty */
     ;

arglist : expression  
         | expression ',' arglist 
         ;



%%	/* end of rules, start of program */
int main(int argv, char * argc[])
{ 
  if (argv > 2) mydebug=1;
  yyparse();
  fprintf(stderr,"the input has been syntactically checked\n");
  ASTprint(0,program);
}
