/*
	파일명 : assign09.c
	내용 : 햄버거 가게의 계산서 프로그램을 작성하시오.
	작성자 : 이승훈
	날짜 : 2025.04.29
	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BurgerKing();
int Momstouch(int a, int b, int c);

int main()
{
	BurgerKing();
	return 0;
}

void BurgerKing()
{
	int a, b, c;
	int min,d;
	
	printf("햄버거 개수? ");
	scanf("%d", &a);
	printf("감자튀김 개수? ");
	scanf("%d", &b);
	printf("콜라 개수? ");
	scanf("%d", &c);
	
	min = Momstouch(a, b, c);
	a = a - min;
	b = b - min;
	c = c - min;
	printf("상품명      단가   수량    금액\n");
	printf("세트        6500   %d      %d\n",min ,min * 6500 );
	if (a != 0)
	{
		printf("햄버거      4000   %d      %d\n", a, a * 4000);
	}
	if (b != 0)
	{
		printf("감자튀김    2000   %d      %d\n", b, b * 4000);
	}
	if (c != 0)
	{
		printf("콜라        1500   %d      %d\n", c, c * 4000);
	}
	
	return;
}

int Momstouch(int a, int b, int c)
{
	int min;
	if (a < b)
	{
		min = a;
	}
	else
	{
		min = b;
	}
	
	if (min > c)
	{
		min = c;
	}
	return min;
}