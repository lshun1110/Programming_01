#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void Righttrianger();
double CalCulate(double b, double h);

int main()
{
	Righttrianger();
	return 0;
}

void Righttrianger()
{
	double bottom, h;
	double result;

	printf("�غ�? ");
	scanf("%lf", &bottom);

	printf("����? ");
	scanf("%lf", &h);
	result = CalCulate(bottom, h);
	printf("������ ����: %lf", result);
}

double CalCulate(double b, double h)
{
	double result;
	result = sqrt(pow(b, 2) + pow(h, 2));
	return result;
}