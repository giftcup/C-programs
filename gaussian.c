#include <stdio.h>

int 
main(void){
	int matrix[3][3];
	int gauss[3][3];
	int rows = 3, cols = 3;
	printf("Enter %d number: ", 3*3);
	
	int i, j, k;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++){
			scanf("%d ", &matrix[i][j]);
		}
	}

	// Doesn't perform the complete gaussian elimination for the last row
	// review the algorithm
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++){
			if (i == 0){
				gauss[i][j] = matrix[i][j];
				continue;
			}
			gauss[i][j] = matrix[0][0]*matrix[i][j] - matrix[i][0]*matrix[0][j];
		}
		if (i == rows && gauss[i][i - 1] != 0){
			for (k = i - 1; k < cols; k++){
				gauss[i][k] = gauss[i-1][i-1]*gauss[i][k] - gauss[i][i-1]*gauss[i-1][k];
			}
		}
	}

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++){
			printf("%d ", gauss[i][j]);
		}
		printf("\n");
	}
}