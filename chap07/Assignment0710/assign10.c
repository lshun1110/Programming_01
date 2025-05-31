/* 파일명: assign10.c

  * 내용: 3 x 3 행렬의 계산 프로그램을 작성하라.

  * 작성자: 이승훈

  * 날짜: 2025.05.31

  * 버전: v1.0

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
	printf("x  + y의 행렬 : \n");
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
	printf("x 행렬 : \n");
	for (int i = 0; i < ArrMax; i++)
	{
		for (int j = 0; j < ArrMax; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	printf("y 행렬 : \n");
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