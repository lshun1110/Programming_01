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

	printf("���(g)? ");
	scanf("%d", &solvent);
	printf("����(g)? ");
	scanf("%d", &solute);

	density = CalCulate(solvent, solute);

	printf("�е�: %.2lf %", density);
}

double CalCulate(int solvent, int solute)
{
	return ((double)(solute) / (double)(solvent + solute)) * 100;
}