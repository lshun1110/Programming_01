#define _CRT_SECURE_NO_WARNINGS
#define pi 3.141592
#include<stdio.h>
#include<math.h>

void Cylinder(void);
double volume(int r, int h);

int main()
{
	Cylinder();
	return 0;
}

void Cylinder(void)
{
	int r, h;
	double result;

	printf("�������� ����? ");
	scanf("%d", &r);

	printf("����? ");
	scanf("%d", &h);

	result = volume(r, h);
	printf("������� ����: %lf", result);

}

double volume(int r, int h)
{
	return pi * pow(r, 2) * h;
}