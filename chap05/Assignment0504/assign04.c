/*
	���ϸ� : assign04.c
	���� : ���� �Ǵ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ��� : �̽���
	��¥ : 2025.04.29
	���� : v 1.0
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

    printf("����? ");
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) 
    {
        printf("%d���� �����Դϴ�.\n", y);
    }
    else 
    {
        printf("%d���� ������ �ƴ�~.\n", y);
    }
    return;
}