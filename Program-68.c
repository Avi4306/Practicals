// Program to read a 3*3 matrix and multiply their value and store them in third matrix
#include <stdio.h>
int main()
{
    int A[3][3], B[3][3], multiplication[3][3];

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
            multiplication[i][j] = 0;
        }
    }

    printf("A * B = \n");
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {

            for (int i = 0; i < 3; i++)
            {
                multiplication[x][y] = multiplication[x][y] + A[x][i] * B[i][y];
            }
            printf("%d ", multiplication[x][y]);
        }
        printf("\n");
    }
}