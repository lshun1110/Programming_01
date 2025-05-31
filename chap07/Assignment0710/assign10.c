/* ���ϸ�: assign10.c

  * ����: 3 x 3 ����� ��� ���α׷��� �ۼ��϶�.

  * �ۼ���: �̽���

  * ��¥: 2025.05.31

  * ����: v1.0

  */

#include <stdio.h>
#define ArrMax 3

void Assignment0710();
void CalArray(int arr1[][3], int arr2[][3]);
void printArray(int arr1[][3], int arr2[][3]);

int main()
{
	Assignment0710();
	return 0;
}

void Assignment0710()
{
	int arr1[3][3] = {{10,20,30}, {40,50,60} ,{70,80,90}};
	int arr2[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} };
	
	printArray(arr1, arr2);
	CalArray(arr1,arr2);

	return;
}

void CalArray(int arr1[][3], int arr2[][3])
{
	printf("x  + y�� ��� : \n");
	for (int i = 0; i < ArrMax; i++)
	{
		for (int j = 0; j < ArrMax; j++)
		{
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
}

void printArray(int arr1[][3], int arr2[][3])
{
	printf("x ��� : \n");
	for (int i = 0; i < ArrMax; i++)
	{
		for (int j = 0; j < ArrMax; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	printf("y ��� : \n");
	for (int i = 0; i < ArrMax; i++)
	{
		for (int j = 0; j < ArrMax; j++)
		{
			printf("%2d ", arr2[i][j]);
		}
		printf("\n");
	}
	return;
}