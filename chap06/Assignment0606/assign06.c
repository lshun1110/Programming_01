/* ���ϸ�: assign06.c

 * ����: ���õ� �޴� �׸��� ��ȣ�� �����ϴ� �Լ��� ����ϰ� �� �Լ��� ���ϰ��� ���� � �޴��� ���õƴ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: �̽���

 * ��¥: 2025.05.22

 * ����: v1.0

 */

#include <stdio.h>

void Assignment0606();
int choose_menu(void);

int main()
{
	Assignment0606();
	return 0;
}

void Assignment0606()
{
	int a;
	while (1)
	{
		a = choose_menu();
		switch (a)
		{
			case 1:
				printf("���Ͽ��⸦ �����մϴ�\n");
				break;
			case 2:
				printf("���������� �����մϴ�\n");
				break;
			case 3:
				printf("�����μ⸦ �����մϴ�\n");
				break;
			case 0:
				return;
		}
		/*
		if (a == 1)
		{
			printf("���Ͽ��⸦ �����մϴ�\n");
		}
		else if (a == 2)
		{
			printf("���������� �����մϴ�\n");
		}
		else if (a == 3)
		{
			printf("�����μ⸦ �����մϴ�\n");
		}
		else
		{
			return;
			//break�� ������.
		}
		*/
	}
}

int choose_menu(void)
{
	int a;
	
	start:
	printf("[1.���� ���� 2. ���� ���� 3. �μ� 0.����] ����? ");
	scanf_s("%d", &a);

	if (a == 1)
		return 1;
	else if (a == 2)
		return 2;
	else if (a == 3)
		return 3;
	else if (a == 0)
		return 0;
	else
		goto start;
	//���ѹݺ��� ���� �������.
}