/*
	���ϸ� : assign17.c
	���� : ���� �ð��� �Է¹޾� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ��� : �̽���
	��¥ : 2025.04.29
	���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Time();
int CarMoeny(int t);

int main()
{
	Time();
	return 0;
}

void Time()
{
	int t, fee;
	printf("���� �ð�(��)" );
	scanf("%d", &t);

	fee = CarMoeny(t);
	printf("���� ���: %d��", fee);

}

int CarMoeny(int t)
{
	int result;
	if (t < 30)
	{
		return 2000;
	}
	else
	{
		return ((t / 10) + 1) * 1000 - 1000;
	}
}