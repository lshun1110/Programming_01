// isEqualContact()
// ��ȯ�� : ���� ������ 1(true) ��ȯ, �׷��� ������ 0�� ��ȯ
// �Է�: ���� �� Contact ��

#include <stdio.h>
#include <string.h>
#include "contact.h"

int isEqualContact(Contact a, Contact b)
{
	if (a.year == b.year && a.gender == b.gender && strcmp(a.name, b.name) == 0 && strcmp(a.phone, b.phone) == 0)
		return 1;
	else
		return 0;
}

void printContact(Contact ct)
{
	printf("�̸� : %s\n", ct.name);
	printf("��ȭ��ȣ : %s\n", ct.phone);
	printf("���� : %s\n", ct.gender == MAN ? "����": "����");
	printf("���� : %d\n", ct.year);
}

int isEqualContactPtr(const Contact *a, const Contact *b)
{
	if (a->year == b->year && a->gender == b->gender && strcmp(a->name, b->name) == 0 && strcmp(a->phone, b->phone) == 0)
		return 1;
	else
		return 0;
}

void printContactPtr(const Contact *ct)
{
	printf("�̸� : %s\n", ct->name);
	printf("�̸� : %s\n", ct->phone);
	printf("�̸� : %s\n", ct->gender == MAN ? "����" : "����");
	printf("�̸� : %d\n", ct->year);

	//ct -> year = 1924; �̰� ����� ���� ó���ؼ� ������
}