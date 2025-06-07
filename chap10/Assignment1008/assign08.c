/* 파일명: assign08.c

  * 내용: 커피숍에 재고와 가격을 출력하는 구조체를 선언하라.

  * 작성자: 이승훈

  * 날짜: 2025.05.31

  * 버전: v1.0

  */


#define _CRT_SECURE_NO_WARNINGS
#define MAX_NAME 30

#include <stdio.h>

typedef struct product
{
    char name[MAX_NAME];
    int price;
    int stock;
} PRODUCT;

void Printproduct(PRODUCT* p);
void Assignment1008();

int main() 
{
    Assignment1008();
    return 0;
}

void Assignment1008()
{
    PRODUCT coffee;

    printf("제품명? ");
    scanf("%s", coffee.name);

    printf("가격? ");
    scanf("%d", &coffee.price);

    printf("재고? ");
    scanf("%d", &coffee.stock);

    Printproduct(&coffee);

    return;
}

void Printproduct(PRODUCT* p) 
{
    printf("[%s %d원 재고: %d]\n", p->name, p->price, p->stock);
    return;
}