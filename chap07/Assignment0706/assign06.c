/* ���ϸ�: assign06.c

  * ����: ũ�� 10�� �Ǽ��� �迭�� ���Ҹ� �������� ����Ͻÿ�.

  * �ۼ���: �̽���

  * ��¥: 2025.05.31

  * ����: v1.0

  */

#include <stdio.h>

void Assignment0706();
void ReverseArray(double arr[], int size);

int main()
{
	Assignment0706();
	return 0;
}

void Assignment0706()
{
	double arr[10] = {1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8};
	int size;
	size = sizeof(arr) / sizeof(arr[0]);

	ReverseArray(arr, size);

	return;
}

void ReverseArray(double arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		printf("%.1f ",arr[i]);
	}

	printf("\n");

	for (int i = size - 1; i >= 0; i--)
	{
		printf("%.1f ", arr[i]);
	}

}