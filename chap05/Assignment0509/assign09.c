/*
	���ϸ� : assign09.c
	���� : �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�.
	�ۼ��� : �̽���
	��¥ : 2025.04.29
	���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BurgerKing();
int Momstouch(int a, int b, int c);

int main()
{
	BurgerKing();
	return 0;
}

void BurgerKing()
{
	int a, b, c;
	int min,d;
	
	printf("�ܹ��� ����? ");
	scanf("%d", &a);
	printf("����Ƣ�� ����? ");
	scanf("%d", &b);
	printf("�ݶ� ����? ");
	scanf("%d", &c);
	
	min = Momstouch(a, b, c);
	a = a - min;
	b = b - min;
	c = c - min;
	printf("��ǰ��      �ܰ�   ����    �ݾ�\n");
	printf("��Ʈ        6500   %d      %d\n",min ,min * 6500 );
	if (a != 0)
	{
		printf("�ܹ���      4000   %d      %d\n", a, a * 4000);
	}
	if (b != 0)
	{
		printf("����Ƣ��    2000   %d      %d\n", b, b * 4000);
	}
	if (c != 0)
	{
		printf("�ݶ�        1500   %d      %d\n", c, c * 4000);
	}
	
	return;
}

int Momstouch(int a, int b, int c)
{
	int min;
	if (a < b)
	{
		min = a;
	}
	else
	{
		min = b;
	}
	
	if (min > c)
	{
		min = c;
	}
	return min;
}