/* 파일명: assign05.c

 * 내용: 인자를 전달받은정수가 짝수인지 검사하고 출력하는 프로그램을 작성하시오

 * 작성자: 이승훈

 * 날짜: 2025.05.22

 * 버전: v1.0

 */

#include <stdio.h>

int sum_even = 0;
int sum_odd = 0;

void Assignment0605();
void is_odd(int a);
void is_even(int a);

int main()
{
	Assignment0605();
	return 0;
}

void Assignment0605()
{
	int a = 0;

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)");

	for (;;)
	{
		scanf_s("%d", &a);
		if (a == 0)
			break;
		is_even(a);
		is_odd(a);
	}

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.",sum_even,sum_odd );
	return;
}

void is_even(int a)
{
	if (a % 2 == 0)
		sum_even += 1;
}

void is_odd(int a)
{
	if (a % 2 == 1)
		sum_odd +=1;
}