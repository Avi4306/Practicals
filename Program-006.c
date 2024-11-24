//Swapping two variables without using third variable
#include<stdio.h>
int main()
{
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping value of a is %d and b is %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping value of a is %d and b is %d", a, b);
}
