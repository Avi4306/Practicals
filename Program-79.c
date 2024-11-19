//Write a function exchange to interchange the value of two variable, say X and Y
#include<stdio.h>
int exchange(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    printf("The value of a after exchanging: %d\n", a);
    printf("The value of b after exchanging: %d\n", b);
}
int main()
{
    int a,b;
    printf("Enter value of a: \n");
    scanf("%d", &a);

    printf("Enter value of b: \n");
    scanf("%d", &b);
    exchange(a, b);
}