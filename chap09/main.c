#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int testStrlen();
//int test_strcpy();
//int str_swap(char* str1, char* str2, int size);
int test_string();

int main()
{
	test_string();
	//test_strcpy();
	//testStrlen();
	//printf("Hello, World!\n");
	return 0;
}
/*
#define	STR_SIZE 128

int test_strcpy()
{
	char str1[STR_SIZE]="";
	char str2[STR_SIZE]="";

	printf("�� ���ڿ� �Է�: ");
	scanf_s("%s %s",str1,STR_SIZE,str2,STR_SIZE);
	printf("%s %s �� �ԷµǾ����ϴ�.\n",str1, str2);

	str_swap(str1, str2, STR_SIZE);

	printf("%s %s �� ��ȯ �Ǿ����ϴ�.", str1, str2);
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
	// char temp[size]; -> �̷��� ���� ũ��𸣰�
	if (temp == NULL)
		return 0;
	// malloc ���� ó�� �ڵ� 
	
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
	char name[] = "��浿";

	size_t len = strlen(str1);

	printf("%s �� ���� : %d\n", str1, len);
	//printf("%s �� ���� : %d\n", str1, strlen(str1));

	len = strlen("�ȳ��ϼ���");

	printf("%s �� ���� : %d\n", str1, strlen(str1));
	printf("%s �� ���� : %d", name, strlen(name));

	return 0;
}
*/
#define SIZE 128
int test_string()
{
	char in_str[SIZE]= "";
	char out_str[SIZE] = "";

	printf("Enter string : ");
	gets_s(in_str, sizeof(in_str));

	//fgets_s(in_str, sizeof(in_str),stdin); -> stdin Ű���� ����
	//���Ͽ��� �б� : ��� ����

	FILE* mycontact = fopen("mycontact.txt","r");
	if (mycontact == NULL)
	{
		printf("Failt to open file");
		return -1;
	}
	while (fgets(in_str, sizeof(in_str), mycontact) != NULL)
	{
		//fgets(in_str, sizeof(in_str), mycontact);
		puts(in_str);

		char* pToken = strtok(in_str, " | , ");
		if (pToken != 0)
			puts(pToken);
		pToken = strtok(NULL, " | , ");
		if (pToken != 0)
			puts(pToken);
		pToken = strtok(NULL, " | , ");
		if (pToken != 0)
			puts(pToken);
	}
	fclose(mycontact);
	// strtok_s ���� static �����԰��� �Լ� �ڸ��� ���� �ּ� ���尡�� �� ���¿��µ�  static ���ָ鼭 �츮�� ��������� �����ؼ� ������� ����
}