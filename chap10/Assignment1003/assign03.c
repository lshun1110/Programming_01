/* 파일명: assign03.c

  * 내용: 패스워드로 로그인 구조체를 만드는데 구조체에 있는 로그인 아이디와 일치하면 로그인 성공을 출력하세요. 

  * 작성자: 이승훈

  * 날짜: 2025.06.07

  * 버전: v1.0

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

    result == 1 ? printf("로그인성공") : printf("로그인실패");

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
