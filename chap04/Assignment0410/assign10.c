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
	printf("비행 소요시간(시간)? ");
	scanf("%f", &hour);
	day = (int)(hour / 24);
	hour = (hour - (24 * day));
	hour1 = (int)(hour);
	min = (hour - hour1) * 60;
	
	printf("비행 소요시간은 %d일 %d시간 %d분입니다.", day, hour1, min);

	return;
}