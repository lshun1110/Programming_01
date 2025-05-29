/* 파일명: assign05.c

 * 내용: 인자를 전달받은정수가 짝수인지 검사하고 출력하는 프로그램을 작성하시오

 * 작성자: 이승훈

 * 날짜: 2025.05.22

 * 버전: v1.0

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
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)");

	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
	{
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
			break;
	}
	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.",is_even(a,i),is_odd(a,i));
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