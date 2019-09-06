/*
Jeffrey Lansford
Lab 5
Feburary 25, 2019
YACC program to check syntax of the outputed tokens from LEX with the grammer defined for C-Algol. Will print what line errors happens on when they occur. 
Input from LEX tokens. Outputs error if syntax is not correct. No semantic actions are taking place.  
*/
%{

#include <stdio.h>
#include <ctype.h>
#include "lex.yy.c"
void yyerror (s) 
        char *s;
{
   	/* prints what line error occurs at when YACC comes across a syntax error */
	fprintf(stderr,"%s line: %d\n", s, lineCount );
}

%}

%start P
/* union structure to allow tokens to be string or integers */ 
%union {
    char *string;
    int integer;
}
/* all tokens returned form LEX */
%token <string> ID
%token INT VOID BOOLEAN BEGINNING END OF WHILE DO READ RETURN WRITE AND OR TRUE FALSE NOT ELSE IF THEN GE LE EE NE
%token <integer> NUM



%%
/* grammer to define the syntax of the C-Algol lanaguge */

P           :   decls   /* program -> declaration list */
            ;
decls       :   decl    /* declaration list -> declaration { declaration } */
            |   decl decls
            ;
decl        :   varDecl /* declartion -> var-declaration | fun-declartion */
            |   funDecl
            ;
varDecl     :   typeSp varList ';'  /* var-declartion -> type-specifier var-list ; */
            ;
varList     :   ID      /* var-list -> ID | ID [NUM] | ID , var-list | ID[NUM] , var-list */
            |   ID '[' NUM ']'
            |   ID ',' varList 
            |   ID '[' NUM ']' ',' varList
            ;
typeSp      :   INT     /* type-specifier -> int | void | boolean */
            |   VOID
            |   BOOLEAN
            ;   
funDecl     :   typeSp ID '(' params ')' compoundSt  /* fun-declartion -> type-specifer ID (params) compound-stmt */
            ;
params      :   VOID    /* params -> void | param-list */
            |   paramList
            ;
paramList   :   param   /* param-list -> param { , param } */
            |   param ',' paramList
            ;
param       :   typeSp ID  /* param -> type-specifer ID [ [] ]+ */
            |   typeSp ID '[' ']'
            ;
compoundSt  :   BEGINNING localDec stateList END  /* compound-stmt -> begin local-declarations statement-list end */
            ;
localDec    :   /* empty */     /* local-declarations -> { var-declaration } */
            |   varDecl localDec
            ;
stateList   :   /*empty*/       /* statement-list -> { statement } */
            |   statement stateList
            ;
statement   :   expressionSt    /* statement -> expression-stmt | compound-stmt | selction-stmt | iteration-stmt | assignment-stmt | return-stmt | read-stmt | write-stmt */
            |   compoundSt
            |   selectionSt
            |   iterationSt
            |   assignmentSt
            |   returnSt
            |   readSt
            |   writeSt
            ;
expressionSt:   expression ';'  /* expression-stmt -> expression ; | ; */ 
            |   ';'
            ;
selectionSt :   IF expression THEN statement    /* selection-stmt -> if expression then statment [ else statement ]+ */
            |   IF expression THEN statement ELSE statement
            ;
iterationSt :   WHILE expression DO statement   /* iteration-stmt -> while expression do statement */ 
            ;
returnSt    :   RETURN ';'  /* return-stmt -> return [ expression ]+ */ 
            |   RETURN expression ';'
            ;
readSt      :   READ var ';'    /* read-stmt -> read variable */
            ;
writeSt     :   WRITE expression ';'    /* write-stmt -> write expression ; */ 
            ;
assignmentSt:   var '=' simpleExpr ';'  /* assignment-stmt -> var = simple-expression ; */ 
            ;
expression  :   simpleExpr  /* expression -> simple-expression */
            ;
var         :   ID          /* var -> ID [ [expression] ]+ */
            |   ID '[' expression ']'
            ;
simpleExpr  :   addExpr     /* simple-expression -> additive-expression [ relop additive-expression ]+ */
            |   addExpr relop addExpr
            ;
relop       :   LE          /* relop -> <= | < | > | >= | == | != */
            |   '<'
            |   '>'
            |   GE
            |   EE
            |   NE
            ;
addExpr     :   term        /* additive-expression -> term { addop term } */ 
            |   term addop addExpr
            ;
addop       :   '+'     /* addop -> + | - */ 
            |   '-'
            ;
term        :   factor  /* term -> factor { multop factor } */
            |   factor multop term
            ;
multop      :   '*'     /* multop -> * | / | and | or */
            |   '/'
            |   AND
            |   OR
            ;
factor      :   '(' expression ')' /* factor -> ( expression ) | NUM | var | call | true | false | not factor */ 
            |   NUM
            |   var
            |   call
            |   TRUE
            |   FALSE
            |   NOT factor
            ;
call        :   ID '(' args ')' /* call -> ID ( args ) */
            ;
args        :   /* empty */     /* args -> arg-list | empty */
            |   argList
            ;
argList     :   expression  /* arg-list -> expression { , expression } */
            |   expression ',' argList
            ;
        
%%

int main ()
{ yyparse();
}
