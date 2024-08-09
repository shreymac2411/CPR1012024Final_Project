#include "fundamentals.h"


/*
Does not return, takes no input

Demonstrates the fundamentals of string manipulation
*/
void fundamentals()
{
	// gets a string and number input from user and tells the user what character is at the position of the entered number
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[80];
	char num_input[10];
	int position;
	while (TRUE)
	{
		printf("Type a string (q - to quit):\n");
		gets(buffer1);
		if (strcmp(buffer1, "q") == 0) break; // quits the while loop if user entered 'q'
		// use of break was taught by Shrey Makhesana

		while (TRUE)
		{
			printf("Type the character position within the string:\n");
			gets(num_input); // get a number input representing the index they are looking for
			position = atoi(num_input); // convert the string read from stdin into int
			if (position >= strlen(buffer1)) // check if the number entered is out of range of the string
			{
				printf("Wrong position... type again, please\n"); // give user a prompt letting them know what's wrong
				continue;
			}
			printf("The character found at %d position is \'%c\'\n", position, buffer1[position]);
			break;
		}
	}
	printf("*** End of Indexing Strings Demo ***\n\n");

	// gets a string from the user and tells the user the length of their string
	printf("*** Start of Measuring Strings Demo ***\n");
	char buffer2[80];
	while (TRUE)
	{
		printf("Type a string (q - to quit):\n");
		gets(buffer2); // prompts stdin for a string
		if (strcmp(buffer2, "q") == 0) break; // quits the while loop if user entered 'q'
		// use of break was taught by Shrey Makhesana
		printf("The length is %lu\n", strlen(buffer2)); // get length of the string
	}
	printf("*** End of Measuring Strings Demo ***\n\n");

	// gets a string from the user and copies it to another string
	printf("*** Start of Copying Strings Demo ***\n");
	char destination[80];
	char source[80];
	while (TRUE)
	{
		destination[0] = '\0'; // clear the destination string
		printf("Destination string is reset to empty\n");
		printf("Type a source string (q - to quit):\n");
		gets(source); // grabs a string from stdin
		if (strcmp(source, "q") == 0) break; // quits loop if q is entered
		// use of break was taught by Shrey Makhesana
		strcpy(destination, source); // copies the string into destination
		printf("New destination string is \'%s\':\n", destination);
	}
	printf("*** End of Copying Strings Demo ***\n\n");

}