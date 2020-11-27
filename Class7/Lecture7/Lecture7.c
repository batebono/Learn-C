// Lecture.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int num, i;
	int isPrime = 1;

	scanf("%u", &num);

	for (i = 2; (i * i) < num; ++i) {
		if (num % i == 0)
		{
			isPrime = 0;
			printf("%u is div by %u and %u \n", num, i, num / i);
			if (num == i * i)
				printf("%u is div by %u \n", num, i);
		}
	}



	if (isPrime)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is not a prime number.\n", num);
}
