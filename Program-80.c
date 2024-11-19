//Write a function that will generate and print the first N Fibonacci numbers. Test the function for N=5,10,15.
#include<stdio.h>
int Fibonacci_series(int N)
{
    int series[N];
    series[0] = 0;
    series[1] = 1;
    for (int i = 2; i < N; i++)
    {
        series[i] = series[i-1] + series[i-2];
    }
    printf("First %d Fibonacci numbers: \n", N);
    for (int i = 0; i < N; i++)
    {
        printf("%d,", series[i]);
    }
    printf("...");
    
}
int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    Fibonacci_series(N);
}