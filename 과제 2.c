#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strcount (char* arr);

int main(void)
{
	char str[10];
	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);
	int length = strcount(str);
	printf("�Էµ� ���ڿ���\n");
	printf("%s\n", str);
	printf("�Դϴ�.");

	printf("�Էµ� ���ڿ��� ���� = %d", length);
	
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

