#include <stdio.h>

void hanoi(int n, char a, char b, char c);

int main()
{
	hanoi(3, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
		printf("%c���� ���� 1��(��) %c�� �ű�\n", a, c);
	else {
		hanoi(n - 1, b, a, c);
		printf("%c���� ���� %d��(��) %c�� �ű�\n", a, n, c);
		hanoi(n - 1, c, b, a);
	}
}