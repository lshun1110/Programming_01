/* ���ϸ�: assign09.c

 * ����: rgb ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �� �ֻ��� ��Ʈ ������ ����ϼ���.

 * �ۼ���: �̽���

 * ��¥: 2025.05.22

 * ����: v1.0

 */

#include <stdio.h>

unsigned char get_red(unsigned int r);
unsigned char get_green(unsigned int g);
unsigned char get_blue(unsigned int b);
void Assignment0609();

int main()
{
	Assignment0609();
	return 0;
}

void Assignment0609()
{
	unsigned char r, g, b;
	unsigned int a;
	printf("RGB ����? ");
	scanf_s("%x",&a);

	r = get_red(a);
	g = get_green(a);
	b = get_blue(a);

	printf("RGB %X�� ����: %02X%02X%02X\n",a,255-r,255-g,255-b);
	return;
}

unsigned char get_red(unsigned int r)
{
	return r >> 16;
}

unsigned char get_green(unsigned int g)
{
	return (g >> 8) & 0xff;
}

unsigned char get_blue(unsigned int b)
{
	return b & 0xff;
}