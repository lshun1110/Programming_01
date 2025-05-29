/*
	파일명 : assign08.c
	내용 : 비트 연산을 수행하는 계산기를 프로그램하시오.
	작성자 : 이승훈
	날짜 : 2025.04.29
	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Bit();

int main()
{
	Bit();
    return 0;
}

void Bit()
{
    int a, b;
    int result = 0;
    char giho;

    printf("비트 연산식? ");
    scanf("%i %c %i", &a, &giho, &b);

    switch (giho) {
    case '&':
        result = a & b;
        break;
    case '|':
        result = a | b;
        break;
    case '^':
        result = a ^ b;
        break;
    }

    printf("결과: %08X %c %08X = %08X\n", a, giho, b, result);

    return ;
}