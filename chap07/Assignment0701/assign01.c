/* 파일명: assign01.c

  * 내용: 등차 수열의 항과 공차를 입력받아 10항까지 출력하라

  * 작성자: 이승훈

  * 날짜: 2025.05.31

  * 버전: v1.0

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

	printf("첫 번째 항? ");
	scanf_s("%d", &a1);

	printf("공차? ");
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