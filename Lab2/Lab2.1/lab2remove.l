         /* simple lex program which removes comments from a source 
	program
            The main key is that a variable "comment" is set when the start of a comment
            is seen and then unset when the ending set is seen.  It is possible to have
            two starts closed by on end.

            Shaun Cooper
            January 2015
 
         */
	/*
	Jeffrey Lansford
	Lab 2.1
	January 25, 2019
	
	In this lab we had to change an existing program that removes 
    comments from a file by adding a count for newline so when the error comes up, it can 
    display which line the error is on. The LEX routine requires an input file so it can 
    read and process. The output is the input file with comments not being printed. 
    */
    
        int comment = 0;
        int debug=1;  /* prints out debug statements if desired */
        int lineCount = 1; /* starts count at one since we start at Line One */
%%
"/*"	{
	if (comment && debug) fprintf(stderr,
		" >>>>>>>> line %d: Possible Nested comment <<<<<<<<<<\n", lineCount);
	comment = 1;
	/* added lineCount to display line numbers */
	}

"*/"	{
          if (!comment) printf("%s",yytext); /*print out if it is not in a comment */
  	  comment = 0;
	}

"\n"	{ lineCount++;
      if (!comment) printf("%s", yytext);/* increments line count when we see a new line  
      and prints it*/}

.       { if (!comment) printf("%s",yytext); }

%%

int yywrap(void)
{return 1;}

main()
{
  yylex();
  
}

