//Read a number N and print a single digit answer showing sum of digit of N
#include<stdio.h>
int main()
{
    int N,temp,sum,sum2;

    printf("Enter a number: \n");
    scanf("%d", &N);
    
    temp=N;
    sum=0;
    while(temp!=0)
    {
        sum=sum+temp%10;
        temp=temp/10;
    }
    while (sum >= 10) 
    {
        sum2 = 0;
        while (sum != 0) {
            sum2 = sum2 + sum % 10;
            sum = sum/10;
        }
        sum = sum2;
    }
    printf("The sum of individual numbers in single digit result: %d", sum);
}