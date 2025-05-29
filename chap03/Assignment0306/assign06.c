/*
파일명 : assign06.c
내용 : 아파트의 면적을 제곱미터(㎡)로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오. 1㎡는 0.3025평에 해당한다.
	   프로그램을 작성할 때 이름 있는 상수를 이용해보자.
작성자 : 이승훈
날짜 : 2025.04.07
버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#define mm 0.3025
#include<stdio.h>

void Area();

int main()
{
	Area();
	return 0;
}

void Area()
{
	float weight;
	
	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &weight);

	printf("%.2f 제곱미터 = %.2f 평\n",weight, weight * mm);
}