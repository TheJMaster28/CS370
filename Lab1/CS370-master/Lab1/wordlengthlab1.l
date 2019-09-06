     /*  This lex routine uses a counting array to match alphabeticstrings 
         and make a frequency count.
  
         The real item to notice is that yywrap() is called at EOF and then is run
         to do what we need to do.   yywrap() returns true when we have a successful 
         end to the program.  We may want to return false (0) if we want to lexing process 
         to fail 

        Shaun Cooper
        January 2015
   */
   /* 
   Jeffrey Lansford
   Lab 1
   January 18, 2019
   This lab is to help us learn how to use and write Lex programs. The purpose of this lab 
   was to change the already provide file wordlengthlab1.l to have it addtionlly count 
   numbers. The file has aldready had code that count the number of words in a file. What  
   I added was some count variables for counting numbers and new lines and in the lex 
   directives, when the input sees a string of numbers, it incremetes the count variable 
   countNum. It also throws anything else that is not a letter or a number. The C function 
   yywrap prints the total number of words and numbers in the file.   
   This program does require a input file and the output is the the total number of words and number of the file.  
   */
   
    // array for count the word lengths
	int lgths[100];
	// count variables for Numbers and New Lines
	int countNum = 0;
/* Lex directives to count words, numbers, and lines */
%% 
[a-zA-Z]+	{ lgths[yyleng]++; // counts words at differnt lengths
            } 
[0-9]+      { countNum++; // counts numbers in file
            } 
. |
\n          { ; // thorws out all other characters
            }
%%
yywrap()
{
	// prints total number of words at differeant lengths, already wrriten
	int i;
	printf("Length  No. words\n");
	for (i=1; i<100; i++) {
		if (lgths[i] > 0) {
			printf("%5d%10d\n",i,lgths[i]);
		}
	}
	
	// prints the variables to show number of numbers and number of Lines
	printf("Number of Numbers:%3d\n",countNum);
	return(1);
}

main()
{  yylex();

}
