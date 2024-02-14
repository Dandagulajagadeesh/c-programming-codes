#include <stdio.h>

int main() {
   
    char name[] = "D.Jagadeesh";
    char RollNumber[] = "AUU23EGCSA012";

    printf("Name: %s\n", name);
    printf("Roll Number: %s\n", RollNumber);
	int row, col;
	printf("enter number of rows :");
	scanf("%d",&row);
	printf("enter number of columns :");
	scanf("%d",&col);
	int A[row][col], B[row][col], result[row][col], i,j;
	
	printf("enter first matrix values :");
	for(i=0; i < row; i++)
	{
		for(j=0; j < col; j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter second matrix values :");
	for(i=0; i < row; i++)
	{
		for(j=0; j < col; j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	printf("Addition of two matrices :\n");
	for(i=0; i < row; i++)
	{
		for(j=0; j < col; j++)
		{
		result[i][j] = A[i][j] + B[i][j];
		printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	printf("multiplication of two matrices :\n");
	for(i=0; i < row; i++)
	{
		for(j=0; j < col; j++)
		{
		result[i][j] = A[i][j] * B[i][j];
		printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
