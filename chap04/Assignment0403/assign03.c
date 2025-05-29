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
	
	printf("질량(g)? ");
	scanf("%lf", &mass);
	printf("부피(세제곱센티미터)? ");
	scanf("%lf", &volume);

	density = CalCulate(mass, volume);

	printf("밀도: %lf", density);
}

double CalCulate(double m, double v)
{
	return m/v;
}