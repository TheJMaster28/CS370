#ifndef SYMTABLE_H
#define SYMTABLE_H

struct SymbTab
{
    char *name;
    int offset;
    struct SymbTab *next;
    
};

int size=0;
void Insert();
void Display();
void Delete();
int Search(char lab[]);

#endif
