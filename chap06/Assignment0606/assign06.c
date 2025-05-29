/* 파일명: assign06.c

 * 내용: 선택된 메뉴 항목의 번호를 리턴하는 함수를 사용하고 그 함수의 리턴값에 따라 어떤 메뉴가 선택됐는지 간단히 출력하는 프로그램을 작성하시오.

 * 작성자: 이승훈

 * 날짜: 2025.05.22

 * 버전: v1.0

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
				printf("파일열기를 수행합니다\n");
				break;
			case 2:
				printf("파일저장을 수행합니다\n");
				break;
			case 3:
				printf("파일인쇄를 수행합니다\n");
				break;
			case 0:
				return;
		}
		/*
		if (a == 1)
		{
			printf("파일열기를 수행합니다\n");
		}
		else if (a == 2)
		{
			printf("파일저장을 수행합니다\n");
		}
		else if (a == 3)
		{
			printf("파일인쇄를 수행합니다\n");
		}
		else
		{
			return;
			//break도 괜찮다.
		}
		*/
	}
}

int choose_menu(void)
{
	int a;
	
	start:
	printf("[1.파일 열기 2. 파일 저장 3. 인쇄 0.종료] 선택? ");
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
	//무한반복문 또한 상관없다.
}