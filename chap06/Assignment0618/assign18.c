/* ���ϸ�: assign18.c

 * ����: 0~999 ������ ������ ���� 3���� �����ϰ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: �̽���

 * ��¥: 2025.05.22

 * ����: v1.0

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
	printf("%d�� ���: ",a);
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("%d ", i);
			t_sum += 1;
		}
	}
	printf("=> �� %d�� \n",t_sum);
	return;
}