/*   Abstract syntax tree code

     This code is used to define an AST node, 
    routine for printing out the AST
    defining an enumerated type so we can figure out what we need to
    do with this.  The ENUM is basically going to be every non-terminal
    and terminal in our language.

    Shaun Cooper February 2015

*/

#include<stdio.h>
#include<malloc.h>
#include "ast.h" 


/* uses malloc to create an ASTnode and passes back the heap address of the newley created node */
ASTnode *ASTCreateNode(enum ASTtype mytype)
{
    ASTnode *p;
    if (mydebug) fprintf(stderr,"Creating AST Node \n");
    p=(ASTnode *)malloc(sizeof(ASTnode));
    p->type=mytype;
    p->next=NULL;
    p->s1=NULL;
    p->s2=NULL;
    p->value=0;
    return(p);
}

/*  Helper function to print tabbing */

void PT(int howmany)
{
	 // MISSING
}



/*  Print out the abstract syntax tree */
void ASTprint(int level,ASTnode *p)
{
   int i;
   if (p == NULL ) return;
   else
     { 
       PT(level); /*indent */
       switch (p->type) {
        case VARDEC :  printf("Variable ");
                     if (p->sysType == VOIDTYPE)
                       printf("VOID ");
                      printf(" %s",p->name);
                     if (p->value > 0)
                        printf("[%d]",p->value);
                     printf("\n");
		     ASTprint(level,p->s1);
                     break;
        case FUNCTIONDEC :  
                     if (p->sysType == INTTYPE)
                       printf("INT ");
                     if (p->sysType == VOIDTYPE)
                       printf("VOID ");
                     if (p->sysType == BOOLTYPE)
                       printf("BOOLEAN ");
                     printf("FUNCTION %s \n",p->name);
                     /* print out the parameter list */
                     if (p->s1 == NULL ) 
		      { PT(level+2); 
		        printf (" (VOID) "); }
                     else
                       { 
                         PT(level+2);
                         printf( "( \n");
                          ASTprint(level+2, p->s1);
                         PT(level+2);
                         printf( ") ");
                       }
                     printf("\n");
                     ASTprint(level+2, p->s2); // print out the block
                     break;
        case PARAM :  printf("PARAMETER ");
                      if (p->sysType == INTTYPE)
                         printf (" INT ");
                      if (p->sysType == VOIDTYPE)
                         printf (" VOID ");
                      if (p->sysType == BOOLTYPE)
                         printf (" BOOLEAN ");
                      printf (" %s",p->name);
                      if (p->value == -1 ) 
                         printf("[]");
                      printf("\n");                  
                     break;
        case EXPR :  printf("EXPR ");
                     switch(p->sysType) {
   			case PLUS : printf(" + ");
                           break;
   			case MINUS: printf(" - ");
                           break;
                       }
                     printf("\n");
                     ASTprint(level+1, p->s1);
		     if (p->sysType != MYNOT) 
                         ASTprint(level+1, p->s2);
                     break;
        case BLOCK :  printf("BLOCK STATEMENT  \n",p->name);
                     ASTprint(level+1, p->s1);
                     ASTprint(level+1, p->s2);
                     break;
        case WHILESTMT :  printf("WHILE STATEMENT \n");
                     ASTprint(level+1, p->s1);
                     ASTprint(level+2, p->s2);
                     break;
        case NUMBER :  printf("NUMBER with value %d\n",p->value);
                     ASTprint(level+1, p->s1);
                     break;
        case WRITESTMT :  printf("WRITE STATEMENT\n");
                     ASTprint(level+1, p->s1);
                     break;
        default: printf("unknown type in ASTprint\n");


       }
       ASTprint(level, p->next);
     }

}



/* dummy main program so I can compile for syntax error independently   
main()
{
}
/* */
