/* ���ϸ�: assign01.c

  * ����: �н����� �α��� ����ü�� ���弼��.

  * �ۼ���: �̽���

  * ��¥: 2025.06.07

  * ����: v1.0

  */


#define _CRT_SECURE_NO_WARNINGS
#define MAX_ARR 20

#include <stdio.h>
#include <string.h>

typedef struct LOGIN
{
	char ID[MAX_ARR];
	char pw[MAX_ARR];

} LG;

void Assignment1001();
void PrintArray(LG user);

int main()
{
	Assignment1001();
	return 0;
}

void Assignment1001()
{
	LG user;

	printf("ID? ");
	scanf("%s", user.ID);

	printf("Password? ");
	scanf("%s", user.pw);

	
	PrintArray(user);
	return;
}

void PrintArray(LG user)
{
	printf("ID: %s\n", user.ID);
	printf("PW: ");
	for (int i = 0; i < strlen(user.pw); i++)
	{
		printf("*");
	}
	printf("\n");
}