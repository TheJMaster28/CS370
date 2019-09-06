/*
Jeffrey Lansford
Lab5
Feburary 25, 2019
Lex program that creates token based on the languge C-Agol. Must have an input file of the Agol language to work properly. Outputs tokens for YACC to check for syntax. 
Tokens are the reserve words for the language, some boolean operators, IDs, numbers, and single character operators or other symbols that are used in the language.
Counts number of new lines for YACC to use for error output. 
*/

%{

#include"y.tab.h"
int lineCount = 1;
int debug = 1;
%}

%%
int         { if(debug) fprintf(stderr,"return INT\n"); return (INT); /* all reserve words for the language */ } 
void        { if(debug) fprintf(stderr,"return VOID\n"); return (VOID); } 
boolean     { if(debug) fprintf(stderr,"return BOOLEAN\n"); return (BOOLEAN); } 
begin       { if(debug) fprintf(stderr,"return BEGINNING\n"); return (BEGINNING); } 
end         { if(debug) fprintf(stderr,"return END\n"); return (END); } 
of          { if(debug) fprintf(stderr,"return OF\n"); return (OF); } 
while       { if(debug) fprintf(stderr,"return WHILE\n"); return (WHILE); } 
do          { if(debug) fprintf(stderr,"return DO\n"); return (DO); } 
read        { if(debug) fprintf(stderr,"return READ\n"); return (READ); } 
return      { if(debug) fprintf(stderr,"return RETURN\n"); return (RETURN); } 
write       { if(debug) fprintf(stderr,"return WRITE\n"); return (WRITE); } 
and         { if(debug) fprintf(stderr,"return AND\n"); return (AND); } 
or          { if(debug) fprintf(stderr,"return OR\n"); return (OR); } 
true        { if(debug) fprintf(stderr,"return TRUE\n"); return (TRUE); } 
false       { if(debug) fprintf(stderr,"return FALSE\n"); return (FALSE); } 
not         { if(debug) fprintf(stderr,"return NOT\n"); return (NOT); } 
else        { if(debug) fprintf(stderr,"return ELSE\n"); return (ELSE); }
if          { if(debug) fprintf(stderr,"return IF\n"); return (IF); }
then        { if(debug) fprintf(stderr,"return THEN\n"); return (THEN); }
(>=)        { if(debug) fprintf(stderr,"return >=\n"); return (GE); /* boolean operations in language */ }
(<=)        { if(debug) fprintf(stderr,"return <=\n"); return (LE); }
(==)        { if(debug) fprintf(stderr,"return ==\n"); return (EE); }
(!=)        { if(debug) fprintf(stderr,"return !=\n"); return (NE); }

[a-zA-Z][a-zA-Z]*   { yylval.string = strdup(yytext); if(debug) fprintf(stderr,"return ID: %s\n", yylval.string); return (ID); /* variables in language */ }
[0-9][0-9]*     { yylval.integer = atoi((const char *)yytext); if(debug) fprintf(stderr,"return NUM\n"); return (NUM); /* to allow digits to be used in language */ }

[=<>!+\-*/();\[\],] { if(debug) fprintf(stderr,"return token: %c\n", *yytext);return (*yytext); /* operators and other symbols used in language */ } 

\n      { if(debug) fprintf(stderr,"catrige return\n");lineCount++; /* counts number of lines for errors(YACC) in lanuage */ }
.       {; /* thorw out any other charaters */ } 

%%

int yywrap(void) {
return 1;
}
