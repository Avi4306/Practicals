// Program to read 3*3 matrix and findout max and min element
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

    int max = matrix[0][0], min = matrix[0][0];
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (matrix[x][y] > max)
            {
                max = matrix[x][y];
            }

            if (matrix[x][y] < min)
            {
                min = matrix[x][y];
            }
        }
    }
    if (max == min)
    {
        printf("There is no maximum or minimum, all the elements entered are same");
    }
    else
    {
        printf("The maximum is %d and the minimum is %d", max, min);
    }
}