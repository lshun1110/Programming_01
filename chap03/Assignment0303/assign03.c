/*
파일명 : assign03.c
내용 : 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오. 질량은 kg단위, 높이는 m단위로 입력받는다.
작성자 : 이승훈
날짜 : 2025.04.07
버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#define G 9.8
#include<stdio.h>

void assignment0303(void);
double calcPositionEnergy(int weight, int height);

int main()
{
	assignment0303();

	return 0;
}

void assignment0303(void)
{
	int weight, height;
	printf("질량(kg)? ");
	scanf(" %d", &weight);

	printf("높이(m)? ");
	scanf("%d", &height);

	calcPositionEnergy(weight, height);
	printf("위치에너지: %lf J", calcPositionEnergy(weight, height));
}

double calcPositionEnergy(int weight, int height)
{
	return weight * height * G;
}