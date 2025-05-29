/*
	파일명 : assign01.c
	내용 : 입력한 점이 입력받은 사각형의 안에 있는지 판별하는 프로그램 
 	작성자 : 이승훈
  	날짜 : 2025.04.29
   	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Coordinating();
int Rectangle(int a, int b, int c, int d, int x, int y);

int main()
{
	Coordinating();
	return 0;
}

void Coordinating()
{
	int a, b, c, d;
	int result;
	int x, y;
	printf("선택 영역의 최상단점(left, top) ");
	scanf("%d %d",&a, &b);
	printf("선택 영역의 우하단점(right, bottom) ");
	scanf("%d %d", &c,&d);
	printf("점의 좌표 (x,y)");
	scanf("%d %d",&x,&y);

	result = Rectangle(a, b, c, d, x, y);
	if (result == 1)
	{
		printf("직사각형 모양의 선택 영역 내의 점입니다");
	}
	else
	{
		printf("직사각형 모양의 선택 영역 밖의 점입니다");
	}
	return;
}

int Rectangle(int a, int b, int c, int d,int x ,int y)
{
	if (c >= x && a <= x)
	{
		if (b <= y && d >= y)
			return 1;
	}
	return 0;
}