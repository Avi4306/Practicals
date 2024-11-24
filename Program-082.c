// Write a function to calculate (NCR) Factorial of given numbers
#include <stdio.h>
int Factorial(int N)
{
    int factorial;
    if (N == 1)
    {
        factorial = 1;
    }
    else
    {
        factorial = N * Factorial(N - 1);
    }
    return factorial;
}
float NCR(int N, int R)
{
    float NCR = Factorial(N) / (Factorial(R) * Factorial(N - R));
    printf("The value of NCR = %.3f", NCR);
}

int main()
{
    int N, R;
    printf("Enter the value of N and R in NCR: \n");
    scanf("%d %d", &N, &R);

    if (N <= 1 || R <= 0 || N < R)
    {
        printf("Error! N should be greater than 1, R should be greater than 0 and N should be greater than or equal to R");
        return 1;
    }
    else
    {
        NCR(N, R);
    }
}
