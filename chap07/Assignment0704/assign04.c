/* ���ϸ�: assign04.c

  * ����: ������ �ִ�, �ּڰ��� ã�Ƽ� �� �ε����� ���� ����϶�.

  * �ۼ���: �̽���

  * ��¥: 2025.05.31

  * ����: v1.0

  */

#include <stdio.h>
#define ArrMax 10

void Assignment0704();
void MaxArray(int arr[], int size);
void MinArray(int arr[], int size);

int main()
{
	Assignment0704();
	return 0;
}

void Assignment0704()
{
	int arr[ArrMax] = {23,45,62,12,99,83,23,50,72,37};
	int size;
	
	size = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	MaxArray(arr, size);
	MinArray(arr, size);

	return;
}

void MaxArray(int arr[], int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == max)
			printf("�ִ� : �ε��� = %d, �� : %d \n", i, arr[i]);
	}
}

// �̰� ������ �迭�� �Է��̶�� limits.h���� max int Ȱ�� �߾����������

void MinArray(int arr[], int size)
{
	int min = 100;
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == min)
			printf("�ִ� : �ε��� = %d, �� : %d\n", i, arr[i]);
	}
}