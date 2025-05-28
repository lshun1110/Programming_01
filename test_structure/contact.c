// isEqualContact()
// 반환값 : 만약 같으면 1(true) 반환, 그렇지 않으면 0을 반환
// 입력: 비교할 두 Contact 값

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
	printf("이름 : %s\n", ct.name);
	printf("전화번호 : %s\n", ct.phone);
	printf("성별 : %s\n", ct.gender == MAN ? "남자": "여자");
	printf("연도 : %d\n", ct.year);
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
	printf("이름 : %s\n", ct->name);
	printf("이름 : %s\n", ct->phone);
	printf("이름 : %s\n", ct->gender == MAN ? "남자" : "여자");
	printf("이름 : %d\n", ct->year);

	//ct -> year = 1924; 이거 상수형 변수 처리해서 오류남
}