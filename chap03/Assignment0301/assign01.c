/*
파일명 : assign01.c
내용 : 한변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로글램을 작성하시오.
작성자 : 이승훈
날짜 : 2025.04.07
버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void square();

int main()
{
	square();
	return 0;
}

void square()
{
	int line;
	printf("한변의 길이? ");
	scanf("%d", &line);

	printf("정사각형의 넓이 : %d\n", line * line);
	printf("정사각형의 둘레 : %d\n", line * 4);
}