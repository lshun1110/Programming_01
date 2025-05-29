/* 파일명: assign18.c

 * 내용: 0~999 사이의 임의의 정수 3개를 생성하고 약수를 출력하는 프로그램을 작성하시오.

 * 작성자: 이승훈

 * 날짜: 2025.05.22

 * 버전: v1.0

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assignment0618();
void divisors(int a);

int main()
{
	Assignment0618();
	return 0;
}

void Assignment0618()
{	
	int random;
	
	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		random = rand() % 1000;
		divisors(random);
	}
	
	return;
}

void divisors(int a)
{
	int t_sum = 0;
	printf("%d의 약수: ",a);
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("%d ", i);
			t_sum += 1;
		}
	}
	printf("=> 총 %d개 \n",t_sum);
	return;
}