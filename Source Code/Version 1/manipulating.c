// MANIPULATING.C MODULE

#define _CRT_SECURE_NO_WARNINGS // Defining for not showing warnings while using some functions 
#define BUFFER_SIZE 80 // Defining a macro BUFFER SIZE as 80
#include "manipulating.h" // To include the header file for manipulation part


//V1
void manipulating(void) // Function definition for manipulating strings module
{
	printf("*** Start of Concatenating Strings Demo ***\n"); // Printing a message indicating start of the module
	char string1[BUFFER_SIZE]; // Declaring char array of buffer size(80) to store string1
	char string2[BUFFER_SIZE]; // Declaring char array of buffer size(80) to store string2
	do // Loop to get user input and display the concatenated strings
	{
		printf("Type the 1st string (q - to quit):\n"); // Prompting user to type 1st string or q to quit
		fgets(string1, BUFFER_SIZE, stdin); // Reading 1st string from user
		string1[strlen(string1) - 1] = '\0';
		if ((strcmp(string1, "q") != 0)) // Checking if the user input is "q" or a string
		{
			printf("Type the 2nd string:\n"); // If the user selection is not "q", prompting the user to input 2nd string
			fgets(string2, BUFFER_SIZE, stdin); // Reading 2nd string from user
			string2[strlen(string2) - 1] = '\0'; // Removing the newline caused when 2nd string is taking input from fgets
			strcat(string1, string2); // Combining the 2nd string next to the 1st string
			printf("Concatenated string is \'%s\'\n", string1); // Printing the combined string
		}

	} while (strcmp(string1, "q") != 0); // Continue the loop if the user selection is not "q"
	printf("*** End of Concatenating Strings Demo ***\n\n"); // Print a message indicating the end of the module
}