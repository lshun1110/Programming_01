/*
	*���ϸ�: assign11.c
	*����: PA11.������ ���� ���� 3.14159265��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
				(�Ҽ��� ���� 2�ڸ�����, �Ҽ��� ���� 6�ڸ�����, �Ҽ��� ���� 8�ڸ����� ���� ����ϰ�, ���� ǥ��ε� ����غ���.)
	* �ۼ���: �̽���
	* ��¥: 2025.3.31
	* ����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Pi();

int main()
{
	Pi();
	return 0;
}

void Pi()
{
	double pi = 3.14159265;
	printf("pi = %.2lf\n",pi);
	printf("pi = %.4lf\n",pi);
	printf("pi = %.6lf\n",pi);
	printf("pi = %.8lf\n",pi);
	printf("pi = %e",pi);
}