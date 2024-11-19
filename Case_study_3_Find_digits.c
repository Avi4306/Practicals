//You are given a number N, you need to print the number of positions where digits exactly divides N.
#include<stdio.h>
#include<math.h>
int divisibilty(int N)
{
    int digit, count=0, temp=N;
    while (temp!=0)
    {
        digit = temp%10;
        if (N%digit == 0)
        {
            count++;
        }
        temp /= 10;
    }
    printf("%d", count);
}
int main()
{
    int T;
    long long int N;
    printf("Enter number of test cases:\n");
    scanf("%d", &T);
    if (T<1 || T>15)
    {
        printf("Entered value not in constraint");
        return 1;
    }
    
    for (int i = 0; i < T; i++)
    {
        printf("Enter a number:\n");
        scanf("%lld", &N);
        if (N<=0 || N>pow(10, 10))
        {
            printf("Entered value not in constraint");
            return 1;
        }
        
        divisibilty(N);
    }
}