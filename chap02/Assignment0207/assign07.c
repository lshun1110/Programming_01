/*
	*���ϸ�: assign07.c
	*����: PA07.Ŀ�� ������(S,T,G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(Ŀ�� ������� S,T,G ������ ���� �� �ϳ��� �Է¹޴´�.)
	* �ۼ���: �̽���
	* ��¥: 2025.3.31
	* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Order();

int main()
{
	Order();
	return 0;
}

void Order()
{
	char size;
	int num;
	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
	scanf("%c %d",&size,&num);

	printf("%c������ %d���� �ֹ��մϴ�", size, num);
}