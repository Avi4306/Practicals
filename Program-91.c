/* Write a program to calculate the square and cube of an entered number using pointer of a variable
containing the entered number*/
#include <stdio.h>

int main()
{
    int N;
    int *ptr = &N;
    printf("Enter a number\n");
    scanf("%d", &N);
    printf("The square of the number is %d\n", (*ptr) * (*ptr));
    printf("The cube of the number is %d\n", (*ptr) * (*ptr) * (*ptr));
    return 0;
}