/* 파일명: assign01.c

 * 내용: 가로 새로 입력받아서 직사각형 둘레 출력

 * 작성자: 이승훈

 * 날짜: 2025.05.22

 * 버전: v1.0

 */

#include <stdio.h>

void Assignment0601();
int get_perimeter(int a, int b);

int main()
{
	Assignment0601();
	return 0;
}

void Assignment0601()
{
	int a, b;

	printf("가로? ");
	scanf_s("%d", &a);
	printf("세로? ");
	scanf_s("%d", &b);

	printf("직사각형의 둘레: %d", get_perimeter(a,b));
	return;
}

int get_perimeter(int a, int b)
{
	return (a + b) * 2;
}