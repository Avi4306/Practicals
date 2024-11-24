//Swapping Two Variables using Third Variable
#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping value of a is %d and b is %d\n", a, b);

    c = a;
    a = b;
    b = c;
    printf("After swapping value of a is %d and b is %d", a, b);
}
