/* ���ϸ�: assign19.c

 * ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��ۼ�.

 * �ۼ���: �̽���

 * ��¥: 2025.05.22

 * ����: v1.0

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graph(int a, int b);
void Assignment0619();

int main()
{
	Assignment0619();
	return 0;
}

void Assignment0619()
{
	int random;

	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		random = rand() % 10000;
		graph(random, 100);
		printf("\n");
	}

	return;
}

void graph(int a, int scale)
{
	printf("%d:", a);
	for (int i = 0; i < (a / scale); i++)
	{
			printf("*");
	}
	return;
}