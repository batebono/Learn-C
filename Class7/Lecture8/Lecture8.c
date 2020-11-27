#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '.'

int main()
{
	//char ch;
	//int count = 0, count2 = 1, count3 = 1;

	//printf("Enter text :\n");
	//while ((ch = getchar()) != STOP)
	//{
	//	if (ch != ' ')
	//		count++;
	//	if (ch == ' ' || ch == '\n')
	//		count2++;
	//	if (ch == '\n')
	//		count3++;
	//};
	//printf("Characters = %d, Words = %d, Lines = %d\n", count, count2, count3);


	char c;
	int n_chars = 0;
	int n_lines = 0;
	int n_words = 0;
	bool word_flg = true;
	bool line_flag = true;

	printf("Enter text :\n");
	while ((c = getchar()) != STOP)
	{
		if (word_flg){
			if (c != '\n' && c != ' ') {
				n_words++;
				word_flg = false;
			}
		}
		if (line_flag) {
			n_lines++;
			line_flag = false;
		}
		if (c != '\n' && c != ' ')
			n_chars++;
		if (c == '\n') {
			word_flg = true;
			line_flag = true;
		}
		if (c == ' ')
			word_flg = true;
	}

	printf("Characters = %d, Words = %d, Lines = %d\n", n_chars, n_words, n_lines);


}

