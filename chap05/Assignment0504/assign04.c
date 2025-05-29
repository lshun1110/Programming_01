/*
	파일명 : assign04.c
	내용 : 윤년 판단 프로그램을 작성하시오.
	작성자 : 이승훈
	날짜 : 2025.04.29
	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Years();

int main()
{
	Years();
	return 0;
}

void Years()
{
    int y;

    printf("연도? ");
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
    {
        printf("%d년은 윤년입니다.\n", y);
    }
    else 
    {
        printf("%d년은 윤년이 아님~.\n", y);
    }
    return;
}