/* 파일명: assign04.c

  * 내용: 원소의 최댓값, 최솟값을 찾아서 그 인덱스와 값을 출력하라.

  * 작성자: 이승훈

  * 날짜: 2025.05.31

  * 버전: v1.0

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
			printf("최댓값 : 인덱스 = %d, 값 : %d \n", i, arr[i]);
	}
}

// 이거 문제가 배열의 입력이라면 limits.h에서 max int 활용 했어야했을지도

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
			printf("최댓값 : 인덱스 = %d, 값 : %d\n", i, arr[i]);
	}
}