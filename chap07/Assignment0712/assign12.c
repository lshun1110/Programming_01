/* 파일명: assign12.c

  * 내용: 기차표 예매 프로그램을 작성하라. 예매가능이면 o 불가능이면 x 모든 좌석이 불가능이 되면 코드종료.

  * 작성자: 이승훈

  * 날짜: 2025.05.31

  * 버전: v1.0

  */

#include <stdio.h>
#include <string.h>

void Assignment0712();
void CalArray(char a[]);

int main()
{
	Assignment0712();
	return 0;
}

void Assignment0712()
{
	char a[24] = "[ O O O O O O O O O O ]";
	
	while (strchr(a, 'O') != 0)
	{
		printf("%s\n", a);
		CalArray(a);
	}
	return;
}

void CalArray(char a[])
{
	int b ;
	static int v = 0 ;

	printf("예매할 좌석수? ");
	scanf_s("%d", &b);
	
	for (int i = v + 1; i <=  v + b; i++)
	{
		a[2 * i] = 'X';
		printf("%d ", i);
	}
	printf("번 좌석을 예매했습니다.\n");
	v += b;
	
	return;
}