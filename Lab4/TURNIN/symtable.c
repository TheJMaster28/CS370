/* Jeffrey Lansford
 * CS 370
 * Lab 4
 * February 15, 2019
 * C program that simualtes a symbol table with that can Insert(), Display(), and Search()
 * Added indentation and comments into program that was pulled from http://forgetcode.com/C/101-Symbol-table
 * Used with YACC program
 * changed Symtable to have offset and name and modified Insert() to work with YACC and Search() to return offset
 */

#include<stdio.h>
/* #include<conio.h> */
#include<malloc.h>
#include<string.h>
#include<stdlib.h>

#include"symtable.h"

struct SymbTab *first,*last;

/*
 * Inserts a new name into the Symbol Table if it does not already exist in 
 * the table 
 * no return
 */
void Insert( char *l, int off )
{
    // checks if name is in table
    int n;
    
    n=Search(l);
    
    if(n!=-1)
        printf("\n\tThe name exists already in the symbol table\n\tDuplicate cant be inserted");
  
    else
    {
        // make new node SymbTab and set data
        struct SymbTab *p;
        p=malloc(sizeof(struct SymbTab));
        
        p->name = malloc(sizeof(l));
        
        strcpy(p->name,l);
        
        p->offset = off;
        p->next=NULL;
        // sets first and last if new node is the only node.
        if(size==0)
        {
            first=p;
            last=p;
        }
        // more than zero nodes
        else
        {
            // inserts new node always last
            last->next=p;
            last=p;
        }
        size++;
    }
    printf("\n\tname inserted\n");
}// end Insert

/*
 * Displays all current names in Symbol table
 * no return
 */
void Display()
{
    // starts at first then goes through each node through *next of each node
    int i;
    struct SymbTab *p;
    p=first;
    printf("\n\tNAME\t\tOFFSET\n");
    // goes through syboml table and prints each name
    for(i=0;i<size;i++)
    {
        printf("\t%s\t\t%d\n",p->name,p->offset);
        p=p->next;
    }
}// end Display

/*
 * Search for a spefic name in the symbol table
 * returns the offset if founded, -1 if not
 */
int Search(char *lab)
{
    // goes through each node and compares the name vairable of each node to lab
    int i,flag=-1;
    struct SymbTab *p;
    p=first;
    if ( p == NULL ) return flag;
    // goes through symbol table
    for(i=0;i<size;i++)
    {
        // compares name in sybmol table and lab
        if(strcmp(p->name,lab)==0) {
            flag = p->offset;
            
        }
        p=p->next;
    }
    return flag;
}// end Search
