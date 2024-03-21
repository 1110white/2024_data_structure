#include <stdio.h>

int address(int a);

int main(void)
{
	address(0);
	address(1);
	address(2);
	address(4);

	printf("\n");

	address(0);
	address(1);
	address(3);
	address(4);

	return 0;
}

int address(int a) {

	char *ptr[5] = { "Korea", "Seoul", "Mapo", "Jongno", "152¹øÁö 2/3" };
	printf("%s\n", ptr[a]);

	return 0;
}