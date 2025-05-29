#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Density();
double CalCulate(int solvent, int volute);

int main()
{
	Density();
	return 0;
}

void Density()
{
	int solvent, solute;
	double density;

	printf("용매(g)? ");
	scanf("%d", &solvent);
	printf("용질(g)? ");
	scanf("%d", &solute);

	density = CalCulate(solvent, solute);

	printf("밀도: %.2lf %", density);
}

double CalCulate(int solvent, int solute)
{
	return ((double)(solute) / (double)(solvent + solute)) * 100;
}