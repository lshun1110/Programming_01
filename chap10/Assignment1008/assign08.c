/* ���ϸ�: assign08.c

  * ����: Ŀ�Ǽ� ���� ������ ����ϴ� ����ü�� �����϶�.

  * �ۼ���: �̽���

  * ��¥: 2025.05.31

  * ����: v1.0

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

    printf("��ǰ��? ");
    scanf("%s", coffee.name);

    printf("����? ");
    scanf("%d", &coffee.price);

    printf("���? ");
    scanf("%d", &coffee.stock);

    Printproduct(&coffee);

    return;
}

void Printproduct(PRODUCT* p) 
{
    printf("[%s %d�� ���: %d]\n", p->name, p->price, p->stock);
    return;
}