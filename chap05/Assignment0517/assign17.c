/*
	파일명 : assign17.c
	내용 : 주차 시간을 입력받아 주차 요금을 계산해서 출력하는 프로그램을 작성하시오.
	작성자 : 이승훈
	날짜 : 2025.04.29
	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Time();
int CarMoeny(int t);

int main()
{
	Time();
	return 0;
}

void Time()
{
	int t, fee;
	printf("주차 시간(분)" );
	scanf("%d", &t);

	fee = CarMoeny(t);
	printf("주차 요금: %d원", fee);

}

int CarMoeny(int t)
{
	int result;
	if (t < 30)
	{
		return 2000;
	}
	else
	{
		return ((t / 10) + 1) * 1000 - 1000;
	}
}