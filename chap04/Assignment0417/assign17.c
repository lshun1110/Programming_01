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
	printf("7�� ��Ʈ�� 1�� ��: %08x %d\n", x, x);
	x = x << 8;
	printf("15�� ��Ʈ�� 1�� ��: %08x %d\n", x, x);
	x = x << 8;
	printf("23�� ��Ʈ�� 1�� ��: %08x %d\n", x, x);
	x = x << 8;
	printf("31�� ��Ʈ�� 1�� ��: %08x %d", x, x);
	return;
}