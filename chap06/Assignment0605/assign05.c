/* ���ϸ�: assign05.c

 * ����: ���ڸ� ���޹��������� ¦������ �˻��ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: �̽���

 * ��¥: 2025.05.22

 * ����: v1.0

 */

#include <stdio.h>

void Assignment0605();
int is_odd(int a);
int is_even(int a);

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

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", is_even(1), is_odd(2));
	return;
}

int is_even(int a)
{
	static int result = 0;
	if (a % 2 == 0)
		result += 1;

	return result;
}

int is_odd(int a)
{
	static int result = 0;
	if (a % 2 == 1)
		result += 1;

	return result;
}