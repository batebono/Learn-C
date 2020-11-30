#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void counter(void);
char get_choice(void);

int main()
{
	//char c;

	//while (1) {
	//	printf("Enter the letter of your choice:\n");
	//	printf("a. avengers		b. beep\n");
	//	printf("c. count		q. quit\n");
	//	c = getchar();
	//	if (c == 'a')
	//		printf("Avengers assemble!\n");
	//	else if (c == 'b')
	//		printf("beep\n");
	//	else if (c == 'c')
	//		counter();
	//	else if (c == 'q')
	//		break;
	//	while (getchar() != '\n') continue;
	//}

	int user_choice;

	while ((user_choice = get_choice()) != 'q')
	{
		switch (user_choice)
		{
		case 'a':
			printf("Avengers assemble!\n");
			break;	
		case 'b':
			putchar('\a');//beep
			break;
		case 'c':
			counter();
			break;
		default:
			printf("Error with %d.\n", user_choice);
			exit(1);
			break;
		}
		while (getchar() != '\n') continue;
	}
}

char get_choice(void) {
	char c;

	printf("Enter the letter of your choice:\n");
	printf("a. avengers		b. beep\n");
	printf("c. count		q. quit\n");
	scanf("%c", &c);
	return c;
}

void counter(void)
{
	printf("Enter an integer :\n");
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
		printf("%d\n", i);
} 