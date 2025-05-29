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

	printf("반지름의 길이? ");
	scanf("%d", &r);

	printf("높이? ");
	scanf("%d", &h);

	result = volume(r, h);
	printf("원기둥의 부피: %lf", result);

}

double volume(int r, int h)
{
	return pi * pow(r, 2) * h;
}