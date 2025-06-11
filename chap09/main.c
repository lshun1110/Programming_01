#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int testStrlen();
int test_strcpy();
int str_swap(char* str1, char* str2, int size);

int main()
{
	test_strcpy();
	
	//testStrlen();
	//printf("Hello, World!\n");
	return 0;
}

#define	STR_SIZE 128

int test_strcpy()
{
	char str1[STR_SIZE]="";
	char str2[STR_SIZE]="";

	printf("두 문자열 입력: ");
	scanf_s("%s %s",str1,STR_SIZE,str2,STR_SIZE);
	printf("%s %s 가 입력되었습니다.\n",str1, str2);

	str_swap(str1, str2, STR_SIZE);

	printf("%s %s 가 교환 되었습니다.", str1, str2);
	return 0;
}

int str_swap(char *str1, char *str2,int size)
{
	int result = 0;
	if (size <= 0 || str1 == NULL ||str2 == NULL)
		return 0;
	char* temp = NULL;
	//void* malloc(int size);
	temp = (char*)malloc(sizeof(char) * size);
	// char temp[size]; -> 이럴순 없으 크기모르고
	if (temp == NULL)
		return 0;
	// malloc 실패 처리 코드 
	
	strncpy(temp, str1, size);
	strncpy(str1, str2, size);
	strncpy_s(str2, size, temp, size);
	
	result = strlen(str1) + strlen(str2);

	free(temp);

	return result;
}

int testStrlen()
{
	char str1[] = "hello";
	char name[] = "김길동";

	size_t len = strlen(str1);

	printf("%s 의 길이 : %d\n", str1, len);
	//printf("%s 의 길이 : %d\n", str1, strlen(str1));

	len = strlen("안녕하세요");

	printf("%s 의 길이 : %d\n", str1, strlen(str1));
	printf("%s 의 길이 : %d", name, strlen(name));

	return 0;
}