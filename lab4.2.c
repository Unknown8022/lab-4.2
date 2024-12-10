#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 350
void transposeMatrix(int rows, int cols, int matrix[MAX][MAX], int transposed[MAX][MAX]) 
{
	for (int i = 0; i < rows; i++)
	{
		for (int j=0; j < cols; j++)
		{
			transposed[i][j] = matrix[j][i];
		}
	}

}
int main()
{
	int rows, cols;
	int matrix[MAX][MAX], transposed[MAX][MAX];
	printf("How many rows and columns?");
	scanf("%d %d", &rows, &cols);
	printf("Enter elements of the matrix:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("Element [%d][%d]: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
	transposeMatrix(rows, cols, matrix, transposed);
	printf("Original Matrix:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("Transposed Matrix:\n");
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			printf("%d ", transposed[i][j]);
		}
		printf("\n");
	}
	return 0;
}