#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long get_long(void);

int main()
{
	long number;

	printf("Please input an integer between 1 and 100.\n");
	while (1)
	{
		number = get_long();

		if (number > 1 && number < 100) {
			printf("Ok. Thank you.\n");
			break;
		}
		else
			printf("Wrong input.\n");
	}

	printf("Your input %d is between 1 and 100. Thank you.\n", number);
	return 0;
}

long get_long(void)
{
	printf("Please input an interger and press enter.\n");

	long input;
	char c;

	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");

		while ((c = getchar()) != '\n')
			putchar(c);

		printf(" - is not an interger. Please try again.\n");
	}

	printf("Your input %ld is an integer. Thank you.\n", input);
	  
	return input;
}
