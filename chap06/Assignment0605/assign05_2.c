/* ���ϸ�: assign05.c

 * ����: ���ڸ� ���޹��������� ¦������ �˻��ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: �̽���

 * ��¥: 2025.05.22

 * ����: v1.0

 */

#include <stdio.h>
#define arrMax 100

void Assignment0605();
int is_even(int a[], int size);
int is_odd(int a[], int size);

int main()
{
	Assignment0605();
	return 0;
}

void Assignment0605()
{
	int a[arrMax] = { 0 };
	int i;
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)");

	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
			break;
	}
	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.",is_even(a,i),is_odd(a,i));
	return;

}

int is_even(int a[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
			result += 1;
	} 
	
	return result;
}

int is_odd(int a[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] % 2 == 1)
			result += 1;
	}

	return result;
}