/*
	���ϸ� : assign01.c
	���� : �Է��� ���� �Է¹��� �簢���� �ȿ� �ִ��� �Ǻ��ϴ� ���α׷� 
 	�ۼ��� : �̽���
  	��¥ : 2025.04.29
   	���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Coordinating();
int Rectangle(int a, int b, int c, int d, int x, int y);

int main()
{
	Coordinating();
	return 0;
}

void Coordinating()
{
	int a, b, c, d;
	int result;
	int x, y;
	printf("���� ������ �ֻ����(left, top) ");
	scanf("%d %d",&a, &b);
	printf("���� ������ ���ϴ���(right, bottom) ");
	scanf("%d %d", &c,&d);
	printf("���� ��ǥ (x,y)");
	scanf("%d %d",&x,&y);

	result = Rectangle(a, b, c, d, x, y);
	if (result == 1)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�");
	}
	else
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�");
	}
	return;
}

int Rectangle(int a, int b, int c, int d,int x ,int y)
{
	if (c >= x && a <= x)
	{
		if (b <= y && d >= y)
			return 1;
	}
	return 0;
}