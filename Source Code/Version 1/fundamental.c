#define _CRT_SECURE_NO_WARNINGS 
#include "fundamental.h"

/*
Does not return, takes no input

Demonstrates the fundamentals of string manipulation
*/
void fundamentals()
{
	printf("* Start of Indexing Strings Demo *\n");
	char buffer1[80];
	char num_input[10];
	int position;
	while (TRUE)
	{
		printf("Type a string (q - to quit):\n");
		gets(buffer1);
		if (strcmp(buffer1, "q") == 0) break; // quits the while loop if user entered 'q'
		while (TRUE)
		{
			printf("Type the character position within the string:\n");
			gets(num_input); // get a number input representing the index they are looking for
			position = atoi(num_input); // convert the string read from stdin into int
			if (position >= strlen(buffer1)) // check if the number entered is out of range of the string
			{
				printf("Wrong position... type again, please\n"); // give user a prompt letting them know what's wrong
				continue; // Use of break & continue taught by Shrey Makhesena
			}
			printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
			break;
		}
	}
	printf("* End of Indexing Strings Demo *\n\n");
}