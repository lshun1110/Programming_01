#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void MVD();
double CalCulate(double m, double v);

int main()
{
	MVD();
	return 0;
}

void MVD()
{
	double mass, volume, density;
	
	printf("����(g)? ");
	scanf("%lf", &mass);
	printf("����(��������Ƽ����)? ");
	scanf("%lf", &volume);

	density = CalCulate(mass, volume);

	printf("�е�: %lf", density);
}

double CalCulate(double m, double v)
{
	return m/v;
}