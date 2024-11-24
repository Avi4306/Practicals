//Write a C program to define a macro to find biggest number of two given numbers
#include <stdio.h>
#define Max(a,b) (a > b ? a : b)
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("Biggest number: %d", Max(a,b));
    return 0;
}