/* ���ϸ�: assign05.c

 * ����: ���ڸ� ���޹��������� ¦������ �˻��ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: �̽���

 * ��¥: 2025.05.22

 * ����: v1.0

 */

#include <stdio.h>

int sum_even = 0;
int sum_odd = 0;

void Assignment0605();
void is_odd(int a);
void is_even(int a);

int main()
{
	Assignment0605();
	return 0;
}

void Assignment0605()
{
	int a = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)");

	for (;;)
	{
		scanf_s("%d", &a);
		if (a == 0)
			break;
		is_even(a);
		is_odd(a);
	}

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.",sum_even,sum_odd );
	return;
}

void is_even(int a)
{
	if (a % 2 == 0)
		sum_even += 1;
}

void is_odd(int a)
{
	if (a % 2 == 1)
		sum_odd +=1;
}