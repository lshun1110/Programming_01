#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Data();

int main()
{
	Data();
	return 0;
}

void Data()
{
	unsigned int x = 1;

	x = x << 7;
	printf("7번 비트만 1인 값: %08x %d\n", x, x);
	x = x << 8;
	printf("15번 비트만 1인 값: %08x %d\n", x, x);
	x = x << 8;
	printf("23번 비트만 1인 값: %08x %d\n", x, x);
	x = x << 8;
	printf("31번 비트만 1인 값: %08x %d", x, x);
	return;
}