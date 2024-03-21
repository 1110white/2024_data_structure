#include <stdio.h>

void main()
{
	int array[2][3][4];
	int i,j,r, index = 1;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			for (r = 0; r < 4; r++){
				array[i][j][r] = index;
				printf("\n array[%d][%d][%d] = %d", i, j, r, array[i][j][r]);
				index++;
			}
		}
	}
	getchar();
}