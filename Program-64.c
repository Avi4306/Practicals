// Program to read a 3*3 matrix and print the sum of all rows
#include <stdio.h>
int main()
{
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum[3];
    for (int k = 0; k < 3; k++)
    {
        sum[k] = 0;
        for (int l = 0; l < 3; l++)
        {
            sum[k] += matrix[k][l];
        }
        printf("The sum of row %d: %d\n", k+1, sum[k]);
    }
}