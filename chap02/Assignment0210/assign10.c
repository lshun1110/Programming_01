/*
	*파일명: assign10.c
	*내용: PA10.정수를 8진수, 10진수, 16진수 중 하나로 입력받아 8진수, 10진수, 16진수 각각 얼마에 해당하는지 출력하는 프로그램을 작성하시오.
				(8진수를 입력할 때는 앞에 0을 붙여서 012처럼 입력하고,16진수를 입력할 때는 앞에 0x를 붙여서 0x12처럼 입력한다.)
	* 작성자: 이승훈
	* 날짜: 2025.3.31
	* 버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Print();

int main()
{
    Print();
    return 0;
}

void Print()
{
    int num;

    printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n정수? ");
    scanf("%i",&num);

    printf("8진수: %#o\n", num);
    printf("10진수: %d\n", num);
    printf("16진수: %#x\n", num);
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

using namespace std;

int main()
{
    char buf[1000];
    int len = 0;
    int n = 0;
    memset(buf, sizeof(buf), 0);

    scanf("%s", buf);
    while (buf[len] != 0) len++;

    if (buf[0] != '0' || len == 1)
    {
        for (int i = 1; i <= len; i++)
        {
            int p = 1;
            for (int j = 1; j < i; j++) p = 10;
            n += (buf[len - i] - '0') p;
        }
    }
    else if (buf[1] != 'x')
    {
        for (int i = 1; i <= len - 1; i++)
        {
            int p = 1;
            for (int j = 1; j < i; j++) p = 8;
            n += (buf[len - i] - '0') p;
        }
    }
    else
    {
        for (int i = 1; i <= len - 2; i++)
        {
            int p = 1;
            for (int j = 1; j < i; j++) p = 16;
            if ('0' <= buf[len - i] && buf[len - i] <= '9')
                n += (buf[len - i] - '0') p;
            else if ('A' <= buf[len - i] && buf[len - i] <= 'F')
                n += (buf[len - i] - 'A' + 10) * p;
            else if ('a' <= buf[len - i] && buf[len - i] <= 'f')
                n += (buf[len - i] - 'a' + 10) * p;
        }
    }

    printf("8진수 : 0%o\n", n);
    printf("10진수 : %d\n", n);
    printf("16진수 : 0x%x\n", n);

    return 0;
}
*/