#define _CRT_SECURE_NO_WARNINGS
#define pi 3.141592
#include<stdio.h>
#include<math.h>

void Sphere(void);
double CalculateVolume(double r);

int main()
{
	Sphere();
	return 0;
}

void Sphere(void)
{
	double radius, result;
	printf("�������� ����? ");
	scanf("%lf", &radius);
	result = CalculateVolume(radius);
	printf("���� ����: %lf",result);
	return ;
}

double CalculateVolume(double r)
{
	return (4.0 / 3.0) * pi * pow(r, 3);
}