#include "tokenizing.h"

/*
Does not return, takes no input

Demonstrates the fundamentals of string manipulation
*/
void tokenizing()
{

	printf("*** Start of Tokenizing Words Demo ***\n");
	char words[BUFFER_SIZE];
	char* word;
	int w_counter;
	while (TRUE)
	{
		printf("Type a few words separated by space(q - to quit):\n");
		gets(words); // get string from stdin
		if (strcmp(words, "q") == 0) break; // quits the while loop if user entered 'q'
		word = strtok(words, " "); // breaks string into smaller strings using whitespace as a delimiter
		w_counter = 1;
		while (word)
		{
			printf("Word #%d is \'%s\'\n", w_counter++, word); // while they are more tokens, increment w_counter
			word = strtok(NULL, " ");
		}
	}
	printf("*** End of Tokenizing Words Demo ***\n\n");
}