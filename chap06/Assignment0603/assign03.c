/* ���ϸ�: assign03.c

 * ����: ���� ���� ���� �Ÿ� ����ϱ�

 * �ۼ���: �̽���

 * ��¥: 2025.05.22

 * ����: v1.0

 */

#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);
void Assignment0603();

int main()
{
	Assignment0603();
	return 0;
}

void Assignment0603()
{
	int x1, x2, y1, y2;

	printf("������ ������ ��ǥ? ");
	scanf_s("%d %d", &x1,&y1);
	printf("������ ���� ��ǥ? ");
	scanf_s("%d %d", &x2,&y2);

	printf("(%d,%d)~(%d,%d) ������ ����: %f", x1,y1,x2,y2,distance(x1,y1,x2,y2));
}

double distance(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}