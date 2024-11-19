// You are given am integer, N. Write a program to determine if N is an element of the Fibonacci sequence
#include <stdio.h>
#include <math.h>
int isFibo(int N)
{
    int x = 0, y = 1, z;
    z = x + y;
    while (N <= z)
    {
        x = y;
        y = z;
        z = x + y;
    }
    return (N == z || N == 0 || N == 1);
}
int main()
{
    int T, N;
    printf("Enter number of test cases\n");
    scanf("%d", &T);
    printf("Enter numbers\n");
    for (int i = 0; i < T; i++)
    {

        scanf("%d", &N);
        if (isFibo(N))
        {
            printf("IsFibo\n");
        }
        else
        {
            printf("IsNotFibo\n");
        }
    }
}