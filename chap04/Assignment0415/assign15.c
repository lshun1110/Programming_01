#define _CRT_SECURE_NO_WARNINGS
#define MRate 1.75
#include<stdio.h>

void ExchangeRate();
double ExchangeRateCalCulate(double a, double b);

int main()
{
	ExchangeRate();
	return 0;
}

void ExchangeRate()
{
	double a, b, c;
	double result;
	// a �Ÿ� ������ b ȯ�������
	printf("��/�޷� �Ÿű��ط�? ");
	scanf("%lf", &a);
	printf("ȯ�������(0~100%)? ");
	scanf("%lf", &b);

	result = ExchangeRateCalCulate(a, b);
	printf("�޷� �� �� ȯ���� %lf�Դϴ�\n", result);
	printf("������ �޷�(USD)? ");
	scanf(" %lf", &c );

	printf("USD %.2lf �� �� ==> KRW %.2lf ", c, c * (1.0 + result)); 
	return;
}

double ExchangeRateCalCulate(double a, double b)
{
	return a + ((a * (1.0 / 100.0))* MRate * (1 - (b * (1.0 / 100.0))));
}