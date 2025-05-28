#ifndef _CONTACT_H_12648215
#define _CONTACT_H_12648215

//#pragma once
//��ó�� ���þ� �ѹ��� �޾Ƶ鿩��. UNIX ���� �ȵɼ���

enum gender {MAN, WOMAN};
typedef enum gender EGender;

struct contact
{
	char name[24];
	char phone[24];
	EGender gender;
	int year;
};

typedef struct contact Contact;


int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);
void printContactPtr(Contact* ct);
int isEqualContactPtr(Contact* a, Contact* b);

#endif //_CONTACT_H_12648215