#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
	char c; 
	int rows, cols;

	//while (1)
	//{
	//	scanf("%c %d %d", &c, &rows, &cols);
	//	while (getchar() != '\n');
	//	display(c, rows, cols);
	//	if (c == '\n')
	//		break;
	//}

	while ((c = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		while (getchar() != '\n') continue;
		display(c, rows, cols);
		printf("Input another charcter and two intergers:\n");
		printf("Press Enter to quit.\n");
	}

}


void display(char cr, int lines, int width)
{
	int i, j;
	for (i = 0; i < lines; ++i)
	{
		for (j = 0; j < width; j++)
			printf("%c", cr);
		printf("\n");
	}
}