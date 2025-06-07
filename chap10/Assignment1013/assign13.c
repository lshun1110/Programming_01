/* ���ϸ�: assign13.c

  * ����: ���簢���� ���ϴ����� �������� ����ü �����͸� ����� �ۼ��ض�.

  * �ۼ���: �̽���

  * ��¥: 2025.05.31

  * ����: v1.0

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
// �� ����ü ���� ���� ���� �ؾ��ҵ�?

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

    printf("���簢���� ���ϴ���(x, y)? ");
    scanf("%d %d", &r.left_bottom.x, &r.left_bottom.y);

    printf("���簢���� ������(x, y)? ");
    scanf("%d %d", &r.right_top.x, &r.right_top.y);

    print_rect(&r);
}

void print_rect(RECT* r) 
{
    printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]\n", r->left_bottom.x, r->left_bottom.y, r->right_top.x, r->right_top.y);
}