/* ���ϸ�: assign12.c

  * ����: ����ǥ ���� ���α׷��� �ۼ��϶�. ���Ű����̸� o �Ұ����̸� x ��� �¼��� �Ұ����� �Ǹ� �ڵ�����.

  * �ۼ���: �̽���

  * ��¥: 2025.05.31

  * ����: v1.0

  */

#include <stdio.h>
#include <string.h>

void Assignment0712();
void CalArray(char a[]);

int main()
{
	Assignment0712();
	return 0;
}

void Assignment0712()
{
	char a[24] = "[ O O O O O O O O O O ]";
	
	while (strchr(a, 'O') != 0)
	{
		printf("%s\n", a);
		CalArray(a);
	}
	return;
}

void CalArray(char a[])
{
	int b ;
	static int v = 0 ;

	printf("������ �¼���? ");
	scanf_s("%d", &b);
	
	for (int i = v + 1; i <=  v + b; i++)
	{
		a[2 * i] = 'X';
		printf("%d ", i);
	}
	printf("�� �¼��� �����߽��ϴ�.\n");
	v += b;
	
	return;
}