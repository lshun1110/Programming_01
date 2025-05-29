/*
파일명 : assign02.c
내용 : 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
작성자 : 이승훈
날짜 : 2025.04.07
버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void rectangle();

int main()
{
	rectangle();
	return 0;
}

void rectangle()
{
	int side1, side2;
	printf("가로의 길이? ");
	scanf("%d", &side1);
	printf("세로의 길이? ");
	scanf("%d", &side2);

	printf("직사각형의 넓이 : %d\n", side1 * side2);
	printf("직사각형의 둘레 : %d\n", (side1 + side2) * 2);
}