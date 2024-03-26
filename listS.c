#include "listS.h"
// <>이렇게 되어 있으면 원래 있던거 가져오는거/ ""이거는 내가 만든거
int insertElement(int L[], int n, int x) {
	int i, k = 0, move = 0;
	for (i = 0; i < n; i++) {
		if (L[i] <= x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n)
		k = n;

	for (i = n; i > k; i--) {
		L[i] = L[i - 1];
		move++;
	}

	L[k] = x;
	return move;
}

int deleteElement(int L[], int n, int x) {
	int i, k = 0, move = 0;
	for (i = 0; i < n; i++) {
		if (L[i] == x) {
			k = i;
			break;
		}
	}
	if (i == n) move = n;

	for (i = k; i < n-1; i++) {
		L[i] = L[i + 1];
		move++;
	}
	return move;
}