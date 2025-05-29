/* 파일명: assign03.c

 * 내용: 두점 사이 직선 거리 출력하기

 * 작성자: 이승훈

 * 날짜: 2025.05.22

 * 버전: v1.0

 */

#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);
void Assignment0603();

int main()
{
	Assignment0603();
	return 0;
}

void Assignment0603()
{
	int x1, x2, y1, y2;

	printf("직선의 시작점 좌표? ");
	scanf_s("%d %d", &x1,&y1);
	printf("직선의 끝점 좌표? ");
	scanf_s("%d %d", &x2,&y2);

	printf("(%d,%d)~(%d,%d) 직선의 길이: %f", x1,y1,x2,y2,distance(x1,y1,x2,y2));
}

double distance(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}