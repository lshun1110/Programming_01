/*
파일명 : assign04.c
내용 : 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한일의 양을 구하는 프로그램을 작성하시오. 
       (힘의크기는 N단위로 입력받고, 이동한거리는 M단위로 입력받는다.)
작성자 : 이승훈
날짜 : 2025.04.07
버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Work();

int main()
{
    Work();
    return 0;
}

void Work()
{
    float force, distance;
    
    printf("힘(N) ? ");
    scanf(" %f", &force);
    
    printf("이동거리(m)? ");
    scanf("%f", &distance);

    printf("일의 양 :%.2f J", force * distance);
}