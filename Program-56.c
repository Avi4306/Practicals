//Program to read an array of 10 integer and count total no of positive, negative and zero elements
#include<stdio.h>
int main()
{
    int num[10];
    printf("Enter 10 numbers: \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &num[i]);
    }
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for(int i=0;i<10;i++)
    {
        if(num[i]>0)
        positive++;
        else if(num[i]==0)
        zero++;
        else
        negative++;
    }
    printf("The number of positive elements = %d\n", positive);
    printf("The number of negative elements = %d\n", negative);
    printf("The number of zero elements = %d\n", zero);
}
