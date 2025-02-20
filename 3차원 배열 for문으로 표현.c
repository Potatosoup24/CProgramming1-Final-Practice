#include <stdio.h>

int main(void)
{
	int arr[5][3][4];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				arr[i][j][k] = (i + 1) * (j + 1) * (k + 1);
				printf("3차원 배열 arr[%d][%d][%d]=%d\n", i, j, k, arr[i][j][k]);
			}
		}
	}
}