/*
	*���ϸ�: assign02.c
	*����: PA02.�л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.)
	* �ۼ���: �̽���
	* ��¥: 2025.3.31
	* ����: v1.0
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Student();

int main()
{
	Student();
	return 0;
}

void Student()
{
	int num;
	float grade;
	printf("��ȣ? ");
	scanf("%d",&num);
	
	printf("����? ");
	scanf("%f",&grade);

	printf("%d�� �л��� ������ %.6f�Դϴ�.",num, grade);
}