#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void  TimeM();

int main()
{
	TimeM();
	return 0;
}

void  TimeM()
{
	float hour;
	int day, min,hour1;
	printf("���� �ҿ�ð�(�ð�)? ");
	scanf("%f", &hour);
	day = (int)(hour / 24);
	hour = (hour - (24 * day));
	hour1 = (int)(hour);
	min = (hour - hour1) * 60;
	
	printf("���� �ҿ�ð��� %d�� %d�ð� %d���Դϴ�.", day, hour1, min);

	return;
}