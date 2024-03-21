#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strcount (char* arr);

int main(void)
{
	char str[10];
	printf("문자열을 입력하세요 : ");
	scanf("%s", str);
	int length = strcount(str);
	printf("입력된 문자열은\n");
	printf("\"%s\"\n", str);
	printf("입니다.");

	printf("입력된 문자열의 길이 = %d", length);
	
	return 0;
}

int strcount(char* arr)
{
	int cnt = 0;
	int index = 0;
	while (1) {
		if (arr[index] == '\0')
			break;
		else
			cnt++;
			index++;
	}
	return  cnt;
}

