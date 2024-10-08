// Program to read a 3*3 matrix and subtract their value and store them in third matrix
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], subtract[3][3];

    printf("Enter Matrix A: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter Matrix B: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("A - B =\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            subtract[i][j] = A[i][j] - B[i][j];
            printf("%d ", subtract[i][j]);
        }
        printf("\n");
    }
}