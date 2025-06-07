/* 파일명: assign13.c

  * 내용: 직사각형의 좌하단점과 우상단점을 구조체 포인터를 사용해 작성해라.

  * 작성자: 이승훈

  * 날짜: 2025.06.07

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point 
{
    int x;
    int y;
} POINT;

typedef struct rect 
{
    POINT left_bottom;
    POINT right_top;
} RECT;
// 흠 구조체 선언 순번 조심 해야할듯?

void print_rect(RECT* r);
void Assignment1013();

int main() 
{
    Assignment1013();
    return 0;
}

void Assignment1013() 
{
    RECT r;

    printf("직사각형의 좌하단점(x, y)? ");
    scanf("%d %d", &r.left_bottom.x, &r.left_bottom.y);

    printf("직사각형의 우상단점(x, y)? ");
    scanf("%d %d", &r.right_top.x, &r.right_top.y);

    print_rect(&r);
}

void print_rect(RECT* r) 
{
    printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n", r->left_bottom.x, r->left_bottom.y, r->right_top.x, r->right_top.y);
}
