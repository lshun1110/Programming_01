/* ���ϸ�: assign03.c

  * ����: �н������ �α��� ����ü�� ����µ� ����ü�� �ִ� �α��� ���̵�� ��ġ�ϸ� �α��� ������ ����ϼ���. 

  * �ۼ���: �̽���

  * ��¥: 2025.05.31

  * ����: v1.0

  */

#define MAXARR 20
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

typedef struct LOGIN {
    char ID[MAXARR];
    char PW[MAXARR];
} LG;

LG user[5] = {
        {"user1", "pass1"},
        {"user2", "pass2"},
        {"user3", "pass3"},
        {"user4", "pass4"},
        {"user5", "pass5"}
};

void Assignment1003();
int CmpArray(LG user[], char inputID[], char inputPW[]);

int main() 
{
    Assignment1003();
    return 0;
}


void Assignment1003()
{
    char inputID[MAXARR];
    char inputPW[MAXARR];
    int result = 0;

    printf("ID? ");
    scanf("%s", inputID);

    printf("PW? ");
    scanf("%s", inputPW);

    result = CmpArray(user, inputID, inputPW);

    result == 1 ? printf("�α��μ���") : printf("�α��ν���");

    return;
}

int CmpArray(LG user[], char inputID[], char inputPW[])
{
    for (int i = 0; i < 5; i++) 
    {
        if (strcmp(user[i].ID, inputID) == 0 && strcmp(user[i].PW, inputPW) == 0)
            return 1;
    }
    return 0;
}