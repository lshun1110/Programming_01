#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Decline(void);
double CalCulate(int x1, int x2, int y1, int y2);

int main()
{
	Decline();
	return 0;
}

void Decline(void)
{
	int x1, x2, y1, y2;
	double result;

	printf("�� ���� ��ǥ? (x1, y1)? ");
	scanf("%d %d", &x1, &y1);

	printf("�� �ٸ� ���� ��ǥ? (x2, y2)? ");
	scanf("%d %d", &x2, &y2);

	result = CalCulate(x1, x2, y1, y2);
	printf("������ ����: %lf\n", result);
}

double CalCulate(int x1, int x2, int y1, int y2)
{
	double m;
	m = (double)(y2 - y1) / (double)(x2 - x1);
	return m;
}