/* ���ϸ�: assign01.c

  * ����: ���� ������ �װ� ������ �Է¹޾� 10�ױ��� ����϶�

  * �ۼ���: �̽���

  * ��¥: 2025.05.31

  * ����: v1.0

  */

#include <stdio.h>
#define ArrMax 10

void Assignment0701();
void CalArray(int arr[], int a1, int d, int size);
void printArray(int arr[], int size);

int main()
{
	Assignment0701();
	return 0;
}

void Assignment0701()
{
	int a1,d;
	int arr[ArrMax];
	int size;

	printf("ù ��° ��? ");
	scanf_s("%d", &a1);

	printf("����? ");
	scanf_s("%d", &d);

	size = sizeof(arr) / sizeof(arr[0]);

	CalArray(arr, a1, d, size);
	
	printArray(arr, size);

	return;
}

void CalArray(int arr[], int a1, int d, int size)
{
	arr[0] = a1;
	for (int i = 0; i < size - 1; i++)
	{
		arr[i + 1] = i * d;
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}