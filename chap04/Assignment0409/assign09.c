#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void TimeC();

int main()
{
	TimeC();
	return 0;
}

void TimeC()
{
	int second, min, hour;

	printf("재생시간(초)? ");
	scanf("%d", &second);

	hour = second / 3600;
	min = second % 3600 / 60;
	second = second % 3600 % 60;
	
	printf("재생시간은 %d시간 %d분 %d초입니다\n", hour, min, second);
	return;
}
