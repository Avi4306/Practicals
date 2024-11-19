/*Animesh has N empty candy jars numbered from 1 to N, with infinite capacity. He performs M operations. Each operation is described
by 3 integers a, b and k. Here, a and b are indices of the jars, and k is the number of candies to be added inside each jar whose
index lies between a and b (both inclusive). Can you tell the average number of candies after M operations?*/

#include <stdio.h>
#include <math.h>
int main()
{
    int N, M, a, b, k;
    printf("Enter N and M:\n");
    scanf("%d %d", &N, &M);
    if (N < 3 || N > pow(10, 7) || M < 1 || M > pow(10, 5))
    {
        printf("Entered value not in constraints\n");
        return 1;
    }

    int candy = 0;
    for (int i = 0; i < M; i++)
    {
        printf("Enter a, b and k:\n");
        scanf("%d %d %d", &a, &b, &k);
        if (a < 1 || a > N || b < 1 || b > N || k < 0 || k > pow(10, 6))
        {
            printf("Entered value not in constraints\n");
            return 1;
        }
        candy = candy + k * (b - a + 1);
    }
    printf("Average = %d", candy / N);
}