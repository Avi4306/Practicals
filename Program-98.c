// Write a C program to find the product of two matrices using pointer using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **A, **B, **result;
    int row1, col1, row2, col2;
    printf("Enter number of rows and columns in matrix 1:\n");
    scanf("%d %d", &row1, &col1);
    printf("Enter number of rows and columns in matrix 2:\n");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2)
    {
        printf("Matrix multiplication is not possible\n");
        return 1;
    }
    A = (int **)calloc(row1, sizeof(int));
    B = (int **)calloc(row2, sizeof(int));
    result = (int **)calloc(row1, sizeof(int));
    for (int i = 0; i < row1; i++)
    {
        A[i] = (int *)calloc(col1, sizeof(int));
        result[i] = (int *)calloc(col2, sizeof(int));
    }
    for (int i = 0; i < row2; i++)
    {
        B[i] = (int *)calloc(col2, sizeof(int));
    }

    printf("Enter the elements for matrix A:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Enter [%d][%d] element:\n", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements for matrix B:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Enter [%d][%d] element:\n", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++)
            {
                result[i][j] = result[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printf("A * B :\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row1; i++)
    {
        free(A[i]);
        free(result[i]);
    }
    for (int i = 0; i < row2; i++)
    {
        free(B[i]);
    }
    free(A);
    free(B);
    free(result);
    return 0;
}