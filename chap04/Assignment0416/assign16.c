#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void RGB();

int main()
{
	RGB();
	return 0;
}

void RGB()
{
    int red, green, blue;
    int value = 0;
    
    printf("red? ");
    scanf("%d", &red);
    red &= 0xff;

    printf("green? ");
    scanf("%d", &green);
    green &= 0xff;

    printf("blue? ");
    scanf("%d", &blue);
    blue &= 0xff;

    value |= blue << 16;
    value |= green << 8;
    value |= red;

    printf("RGB 트루컬러: %06X", value);
    return ;
}