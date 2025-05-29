/*
	파일명 : assign05.c
	내용 : 온도를 입력받아 화씨는 섭씨로, 섭씨는 화씨로 변환하여 출력하는 프로그램을 작성하시오.
	작성자 : 이승훈
	날짜 : 2025.04.29
	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Temperate();

int main()
{
	Temperate();
	return 0;
}

void Temperate()
{
    float temp, temp2;
    char tem;

    printf("온도? ");
    scanf("%f %c", &temp, &tem);

    if (tem == 'C') {
        temp2 = temp * 9.0 / 5.0 + 32;
        printf("%.2f C ==> %.2f F\n", temp, temp2);
    }
    else if (tem == 'F') {
        temp2 = (temp - 32) * 5.0 / 9.0;
        printf("%.2f F ==> %.2f C\n", temp, temp2);
    }
	return;
}