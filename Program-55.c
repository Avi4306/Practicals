//Program to read an array of 10 integer and count total no of odd and total no of even
#include<stdio.h>
int main()
{
    int num[10];
    printf("Enter 10 numbers: \n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d", &num[i]);
    }
    int odd_count=0;
    int even_count=0;
    for(int i=0;i<=9;i++)
    {
        if(num[i]%2 != 0)
        {
            odd_count++;
        }
        else
        {
            even_count++;
        }
    }
    printf("The number of odd integers = %d\n", odd_count);
    printf("The number of even integers = %d", even_count);
}