/*
	파일명 : assign03.c
	내용 : 거스름돈의 금액을 입력받아 거스름돈 분할 출력해주는 프로그램 작성
	작성자 : 이승훈
	날짜 : 2025.04.29
	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Moneychanging();
int MoneyCalCulating(int m);
int Moneydisturbing(int a);

int main()
{
	Moneychanging();
	return 0;
}

void Moneychanging()
{
	int m;
	int a = 0, b = 0, c = 0, d = 0, e = 0,f = 0;
	int result;
	printf("거스름돈? ");
	scanf("%d", &m);
	
	m = MoneyCalCulating(m);
	printf("거스름돈 (10원미만 절사)%d\n", m);
	
	result = Moneydisturbing(m);

	switch (result)
	{
	case 6:
		a = m / 50000;
		m = m % 50000;
	case 5:
		b = m / 10000;
		m = m % 10000;
	case 4:
		c = m / 5000;
		m = m % 5000;
	case 3:
		d = m / 1000;
		m = m % 1000;
	case 2:
		e = m / 100;
		m = m % 100;
	case 1:
		f = m / 10;
		break;
	}
	
	printf("50000원 %d장\n", a);
	printf("10000원 %d장\n", b);
	printf("5000원 %d장\n", c);
	printf("1000원 %d장\n", d);
	printf("100원 %d개\n", e);
	printf("10원 %d개\n", f);
	
	return;
}

int MoneyCalCulating(int m)
{
	m = (m / 10) * 10;
	return m;
}

int Moneydisturbing(int m)
{
	if (50000 <= m)
	{
		return 6;
	}
	else if (50000 > m && 10000 <= m)
	{
		return 5;
	}
	else if (10000 > m && 5000 <= m)
	{
		return 4;
	}
	else if (5000 > m && 1000 <= m)
	{
		return 3;
	}
	else if (1000 > m && 100 <= m)
	{
		return 2;
	}
	else
	{
		return 1;
	}
}