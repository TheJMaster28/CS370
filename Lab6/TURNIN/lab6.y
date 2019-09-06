/*
Jeffrey Lansford
Lab 6
March 15, 2019
YACC program to check syntax of the outputed tokens from LEX with the grammer defined for C-Algol. Will print what line errors happens on when they occur. 
Input from LEX tokens. Outputs error if syntax is not correct. 
Now has semantic actions to create an AST based on the grammer. Incorpates the C file 'ast.c' and its .h file to have the functions to create the AST. 
Added to the union structre a ASTnodetype pointer to allow the nonterminals to return the nodes and a SYSTYPES enum to allow operator nonterminals to return the type.
Changed the operators' production rules to have left recursion. 
*/
%{
int yylex();
#include <stdio.h>
#include <ctype.h>
#include "ast.h"
//enum SYSTEMTYPES Type;
int lineCount; 
void yyerror (s) 
        char *s;
{
   	/* prints what line error occurs at when YACC comes across a syntax error */
	fprintf(stderr,"%s line: %d\n", s, lineCount );
}

%}

%start P
/* union structure to allow tokens to be string or integers, allows nonterminals to be ASTnodes or SYSTEMTYPES enum */ 
%union {
    char *string;
    int integer;
    struct ASTnodetype * node;
    enum SYSTEMTYPES types;
}
/* all tokens returned form LEX */
%token <string> ID
%token INT VOID BOOLEAN BEGINNING END OF WHILE DO READ RETURN WRITE AND OR TRUE FALSE NOT ELSE IF THEN GE LE EE NE 
%token <integer> NUM 
%type <node> P decls decl varDecl varList funDecl params compoundSt paramList param localDec expressionSt  returnSt iterationSt
%type <node> stateList statement writeSt expression simpleExpr addExpr term factor var readSt  call args argList selectionSt assignmentSt
%type <types> relop addop multop 
%type <integer> typeSp
%left '+' '-'
%left '*' '/' '%'

%%
/* grammer to define the syntax of the C-Algol lanaguge */

P           :   decls { program = $1; /* set program to the begining of the tree */ }  /* program -> declaration list */
            ;
decls       :   decl  { $$ = $1; /* passes node from decl to decls */ }  /* declaration list -> declaration { declaration } */
            |   decl decls { $1->next = $2; /* chains declarations together with the next pointer */
                             $$ = $1; /* pass node */
                             }
            ;
decl        :   varDecl  { $$ = $1; /* pass the node from varDecl */ }/* declartion -> var-declaration | fun-declartion */
            |   funDecl  { $$ = $1; } 
            ;
varDecl     :   typeSp varList ';'{ 
				    $$ = $2; /* passes node from varList */
				    /* sets type for all varlists */
				    ASTnode *p;
				    p = $2;
				    while ( p != NULL ) {
                                       p->sysType = $1;
                                       p = p->s1;
                                    }
				    }  /* var-declartion -> type-specifier var-list ; */
            ;
varList     :   ID  { $$ = ASTCreateNode(VARDEC); /* create node */    /* var-list -> ID | ID [NUM] | ID , var-list | ID[NUM] , var-list */
                      $$->name = $1; /* set name to its ID */
                      //$$->sysType = Type; /* set type according to the typeSp */ 
                      }                                                               
            |   ID '[' NUM ']' { $$ = ASTCreateNode(VARDEC); /* creates node */
                                 $$->name = $1; /* sets name to its ID */
                                 $$->value =$3; /* sets value from the NUM of the size of the array */
                                 //$$->sysType = Type; /* sets Type accroding to typeSP */
                                 }
            |   ID ',' varList { $$ = ASTCreateNode(VARDEC);
                                 $$->name = $1;
                                 //$$->sysType = Type;
                                 $$->s1 = $3; /* chains VARDECs together with the s1 pointer */
                                 }
            |   ID '[' NUM ']' ',' varList { $$ = ASTCreateNode(VARDEC); 
                                             $$->name = $1;
                                             $$->value = $3;
                                             //$$->sysType = Type;
                                             $$->s1 = $6; /* chains VARDECs together with the s1 pointer */
                                             } 
            ;
typeSp      :   INT  { $$ = INTTYPE;  /* sets type of the function or variable */}  /* type-specifier -> int | void | boolean */
            |   VOID { $$ = VOIDTYPE; }
            |   BOOLEAN { $$ = BOOLEANTYPE; }
            ;   
funDecl     :   typeSp ID '(' params ')' compoundSt  { 
                                                     $$ = ASTCreateNode(FUNDEC); /* creates FUNDEC node */
                                                     $$->name = $2; /* sets name to its ID */
                                                     $$->s1 = $4; /* sets its parameters to the s1 pointer */
                                                     $$->s2 = $6; /* sets the block statement to the s2 pointer */
                                                     $$->sysType = $1;
                                                     //$$->sysType = Type; /* sets type of the funtion */
                                                     }/* fun-declartion -> type-specifer ID (params) compound-stmt */
            ;
params      :   VOID   { $$ = ASTCreateNode(PARAM); /* create a PARAM node and sets type to NULLTYPE to sesemble no parameters */
                         $$->sysType = NULLTYPE; 
                         } /* params -> void | param-list */
            |   paramList { $$ = $1; }
            ;
paramList   :   param   { $$ = $1; }/* param-list -> param { , param } */
            |   param ',' paramList { $1->next = $3; /* chains parameters together with next pointer */
                                      $$ = $1; 
                                      }
            ;
param       :   typeSp ID  { $$ = ASTCreateNode(PARAM); /* creates PARAM node, then sets its name and type */
                             $$->name = $2; 
                             $$->sysType = $1;	
                             }/* param -> type-specifer ID [ [] ]+ */
            |   typeSp ID '[' ']' { $$ = ASTCreateNode(PARAM);
                                    $$->name = $2;
                                    $$->value = 1; /* sets value to 1 for printing */
                                    $$->sysType = $1;
                                    } 
            ;
compoundSt  :   BEGINNING localDec stateList END {$$ = ASTCreateNode(BLOCK); /* creates BLOCK node */
                                                  $$->s1 = $2; /* sets localDec to s1 */
                                                  $$->s2 = $3; /* sets sataList to s2 */
                                                  } /* compound-stmt -> begin local-declarations statement-list end */
            ;
localDec    :   /* empty */  {$$ = NULL; }   /* local-declarations -> { var-declaration } */
            |   varDecl localDec { $1->next = $2; /* chains localDec together with next */
                                   $$ = $1; 
                                   }
            ;
stateList   :   /*empty*/ {$$ = NULL; }       /* statement-list -> { statement } */
            |   statement stateList { if ( $1 != NULL ) { /* checks if statement is not NULL */
                                        $1->next = $2; /* chains statments together with next */
                                        $$ = $1; /* sets to statement */
                                        }
                                      else {
                                        $$ = $2; /* sets to stateList if statement is NULL */
                                        }
                                      }
            ;
statement   :   expressionSt { $$ = $1; /* passes nodes created by each different statement */}   /* statement -> expression-stmt | compound-stmt | selction-stmt | iteration-stmt | assignment-stmt | return-stmt | read-stmt | write-stmt */
            |   compoundSt { $$ = $1; }
            |   selectionSt { $$ = $1; }
            |   iterationSt { $$ = $1; }
            |   assignmentSt { $$ = $1; }
            |   returnSt { $$ = $1; }
            |   readSt { $$ = $1; }
            |   writeSt { $$ = $1; }
            ;
expressionSt:   expression ';' { $$=$1; /* passes node from expression */}  /* expression-stmt -> expression ; | ; */ 
            |   ';' { $$ = NULL; /* sets to null for no expressions */ }
            ;
selectionSt :   IF expression THEN statement  { $$ = ASTCreateNode(SELESTMT); /* creates a SELESTMT node */
                                                     $$->s1 = ASTCreateNode(IFTHEN); /* creates a IFTHEN node in the SELESTMT's s1 */
                                                     ($$->s1)->s1 = $2; /* sets IFTHEN's s1 with the expression */
                                                     ($$->s1)->s2 = $4; /* sets IFTHEN's s2 with the statement */
                                                     }/* selection-stmt -> if expression then statment [ else statement ]+ */
            |   IF expression THEN statement ELSE statement  { $$ = ASTCreateNode(SELESTMT); 
                                                                    $$->s1 = ASTCreateNode(IFTHEN); 
                                                                    ($$->s1)->s1 = $2; 
                                                                    ($$->s1)->s2 = $4; 
                                                                    $$->s2 = ASTCreateNode(ELSESTMT); /* creats an ELSESTMT in SELESTMT's s2 */
                                                                    ($$->s2)->s1 = $6; /* sets the ELSESTMT's s1 with the second expression */
                                                                    }
            ;
iterationSt :   WHILE expression DO statement { $$ = ASTCreateNode(WHILEDO); /* creates WHILEDO node */
                                                $$->s1 = $2; /* sets s1 with epression */
                                                $$->s2 = $4; /* sets s2 with statement */
                                                }   /* iteration-stmt -> while expression do statement */ 
            ;
returnSt    :   RETURN ';'  { $$ = ASTCreateNode(RETURNT); /* creates RETURN node */ } /* return-stmt -> return [ expression ]+ */ 
            |   RETURN expression ';' { $$ = ASTCreateNode(RETURNT); /* creates RETURN node with s1 set to the expression */
                                        $$->s1 = $2; 
                                        } 
            ;
readSt      :   READ var ';'{ $$ = ASTCreateNode(READT); /* creates READST node, sets s1 to var */
                              $$->s1=$2; 
                              } /* read-stmt -> read variable */
            ;
writeSt     :   WRITE expression ';' { $$= ASTCreateNode(WRITET); /* creates WRITEST node, sets s1 to expression */
                                       $$->s1 = $2; } /* write-stmt -> write expression ; */ 
            ;
assignmentSt:   var '=' simpleExpr ';' { $$ = ASTCreateNode(ASSIGN); /* creates ASSIGN node */ 
                                         $$->s1 = $1; /* sets s1 to var */
                                         $$->s2 = $3; /* sets s2 to simpleExpr */ 
                                       } /* assignment-stmt -> var = simple-expression ; */ 
            ;
expression  :   simpleExpr { $$ = $1; }  /* expression -> simple-expression */
            ;
var         :   ID { $$ = ASTCreateNode(IDENT); /* creates IDENT node and sets name to the ID */
                     $$->name = $1; 
                   }           /* var -> ID [ [expression] ]+ */
            |   ID '[' expression ']' { $$ = ASTCreateNode(IDENT); 
                                        $$->name = $1; 
                                        $$->value = 1; /* sets value for printing */
                                        $$->s1 = $3; /* sets s1 to expression */
                                      } 
            ;
simpleExpr  :   addExpr { $$ = $1; }  /* simple-expression -> additive-expression [ relop additive-expression ]+ */
            |   addExpr relop addExpr { $$ = ASTCreateNode(EXPR); /* creates EXPR node */ 
                                        $$->sysType = $2; /* setstype to the relop */
                                        $$->s1 = $1; /* sets left and right addExpr to s1 and s2 */
                                        $$->s2 = $3; 
                                      }
            ;
relop       :   LE { $$ = LET; /* returns types according to the operator */ }          /* relop -> <= | < | > | >= | == | != */
            |   '<' { $$ = LT; }
            |   '>' { $$ = GT; }
            |   GE { $$ = GET; }
            |   EE { $$ = EET; }
            |   NE { $$ = NET; }
            ;
addExpr     :   term { $$ = $1; }        /* additive-expression -> term { addop term } */ 
            |   addExpr addop term { $$ = ASTCreateNode(EXPR); /* creates EXPR node */
                                     $$->s1 = $1; /* sets s1 to addExpr */
                                     $$->s2 = $3; /* sets s2 to term */
                                     $$->sysType = $2; /* sets type according to addop */
                                     }
            ;
addop       :   '+'    { $$ = ADDOPER;  /* returns type ADDOPER for addition */} /* addop -> + | - */ 
            |   '-'    { $$ = SUBOPER; /* returns type SUBOPER for subtraction */ }
            ;
term        :   factor { $$ = $1; } /* term -> factor { multop factor } */
            |   term multop factor { $$ = ASTCreateNode(EXPR); /* creates EXPR node */
                                     $$->s1 = $1; /* sets s1 to term */
                                     $$->s2 = $3; /* sets s2 to factor */
                                     $$->sysType = $2; /* sets type according to multop */
                                     }
            ;
multop      :   '*'  { $$ = MULTOPER; /* returns type for each operator */ }  /* multop -> * | / | and | or */
            |   '/'  { $$ = DIVDOPER; }
            |   AND  { $$ = ANDOPER; }
            |   OR   { $$ = OROPER; }
            ;
factor      :   '(' expression ')' { $$ = $2; /* passes node form expression */ } /* factor -> ( expression ) | NUM | var | call | true | false | not factor */ 
            |   NUM { $$ = ASTCreateNode(NUMT); /* makes NUMT node and sets value to the number */
                      $$->value = $1; 
                      }
            |   var { $$ = $1; /* passes node from var */ }
            |   call { $$ = $1; /* passes node from call */ }
            |   TRUE { $$ = ASTCreateNode(BOOLT); /* creates BOOLT node */
                       $$->value = 1; /* sets value to 1 for ttrue */
                       }
            |   FALSE { $$ = ASTCreateNode(BOOLT); /* creates BOOT node */
                        $$->value = 0; /* sets value to 0 for false */
                        }
            |   NOT factor { $$= ASTCreateNode(EXPR); /* creates EXPR node */
                             $$->s1 = $2; /* sets s1 to factor */
                             $$->sysType = NOTT; /* sets type to NOTT for not operator */
                             }
            ;
call        :   ID '(' args ')' { $$ = ASTCreateNode(CALLT); // creates CALL node */
                                  $$->s1= $3; /* sets s1 to args */
                                  $$->name = $1; /* sets name to the ID */
                                  } /* call -> ID ( args ) */
            ;
args        :   /* empty */ { $$ = NULL; /* sets to NULL if no args */ } /* args -> arg-list | empty */
            |   argList { $$ = $1; /* passes node from argList */ } 
            ;
argList     :   expression  { $$ = ASTCreateNode(ARGLIST);
                              $$->s1 = $1;
                              } /* arg-list -> expression { , expression } */
            |   expression ',' argList { $$ = ASTCreateNode(ARGLIST);
                                         $$->next = $3; /* chains argList together with next to expression's node */
                                         $$->s1 = $1; /* passes expression node */
                                         } 
            ;
        
%%

int main ()
{ 
    yyparse();
    ASTprint(0,program);
}
