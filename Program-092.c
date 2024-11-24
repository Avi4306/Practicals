//Write a C program using pointers to find the biggest of given list of numbers
#include <stdio.h>

int main()
{
    int N;
    printf("Enter number of numbers:\n");
    scanf("%d", &N);
    int num[N];
    printf("Enter the numbers:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    int *ptr = num;
    int biggest = *ptr;
    for (int i = 1; i < N; i++)
    {
        ptr++;
        if (*ptr > biggest)
        {
            biggest = *ptr;
        }
    }
    printf("The biggest of the numbers: %d\n", biggest);
    return 0;
}
