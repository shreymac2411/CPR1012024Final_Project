#include "tokenizing.h"

/*
Does not return, takes no input

Demonstrates the fundamentals of string manipulation
*/
void tokenizing()
{
	//V1
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

	//V2
	// splits a larger string into smaller strings delimited by ,
	printf("*** Start of Tokenizing Phrases Demo ***\n");
	char phrases[BUFFER_SIZE];
	char* phrase;
	int p_counter;
	while (TRUE)
	{
		printf("Type a few phrases separated by comma(q - to quit):\n");
		gets(phrases);
		if (strcmp(phrases, "q") == 0) break;
		phrase = strtok(phrases, ",");
		p_counter = 1;
		while (phrase)
		{
			printf("Phrase #%d is \'%s\'\n", p_counter++, phrase);
			phrase = strtok(NULL, ",");
		}
	}
	printf("*** End of Tokenizing Phrases Demo ***\n\n");
	// splits a larger string into smaller strings delimited by .
	printf("*** Start of Tokenizing Sentences Demo ***\n");
	char sentences[BUFFER_SIZE];
	char* sentence;
	int s_counter;
	while (TRUE)
	{
		printf("Type a few sentences separated by dot(q - to quit):\n");
		gets(sentences);
		if (strcmp(sentences, "q") == 0) break;
		sentence = strtok(sentences, ".");
		s_counter = 1;
		while (sentence)
		{
			printf("sentence #%d is \'%s\'\n", s_counter++, sentence);
			sentence = strtok(NULL, ".");
		}
	}
	printf("*** End of Tokenizing Sentences Demo ***\n\n");
}