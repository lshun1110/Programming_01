/*
	*���ϸ�: assign09.c
	*����: PA09.16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	* �ۼ���: �̽���
	* ��¥: 2025.3.31
	* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Change();

int main()
{
	Change();
	return 0;
}

void Change()
{
	int num;
	printf("16���� ����? ");
	scanf("%x",&num);

	printf("16���� %x�� 10���� %d�Դϴ�\n",num,num);
}