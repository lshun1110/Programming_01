/*
	*���ϸ�: assign10.c
	*����: PA10.������ 8����, 10����, 16���� �� �ϳ��� �Է¹޾� 8����, 10����, 16���� ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
				(8������ �Է��� ���� �տ� 0�� �ٿ��� 012ó�� �Է��ϰ�,16������ �Է��� ���� �տ� 0x�� �ٿ��� 0x12ó�� �Է��Ѵ�.)
	* �ۼ���: �̽���
	* ��¥: 2025.3.31
	* ����: v1.0
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

    printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n����? ");
    scanf("%i",&num);

    printf("8����: %#o\n", num);
    printf("10����: %d\n", num);
    printf("16����: %#x\n", num);
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

    printf("8���� : 0%o\n", n);
    printf("10���� : %d\n", n);
    printf("16���� : 0x%x\n", n);

    return 0;
}
*/