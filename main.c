#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "GCD1.h"

int main()
{
	int a, b;

	if (scanf("%d %d", &a, &b) != 2)
	{
		printf("오류");
		return 1;
	}

	int g = gcd(a, b);

	printf("GCD : %d\n", g);

	return 0;
}