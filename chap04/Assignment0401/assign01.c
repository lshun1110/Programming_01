/*


*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int assignment0401();
double getMotionEnergy(double weight, double velocity);

int main()
{
	int r = assignment0401();
	return r;
}

int assignment0401()
{
	double weight = 0.0;
	double velocity = 0.0;
	
	printf("����? ");
	scanf("%lf", &weight);
	printf("�ӵ�? ", &velocity);
	scanf("%lf", &velocity);
	
	printf("%.2lf J", getMotionEnergy(weight, velocity));

	return 0;
}

double getMotionEnergy(double weight, double velocity)
{
	return 1.0/2.0 * weight * pow(velocity,2);
}