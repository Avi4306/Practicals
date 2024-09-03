//Program which will work like a simple calculator
#include<stdio.h>
int main()
{
    float a,b,c;
    char op;

    printf("Simple Calculator\n");
    printf("Enter the arithmetic operation to perform\n");
    printf("a for addition, s for subtraction, m for multiplication, d for division \n");
    scanf("%c", &op);

    printf("Enter two numbers: \n");
    printf("Number 1: \n");
    scanf("%f", &a);
    printf("Number 2: \n");
    scanf("%f", &b);

    switch (op)
    {
        case 'a' :
        c = a+b;
        printf("%.2f + %.2f = %.2f", a, b, c);
        break;
        
        case 'b' :
        c = a-b;
        printf("%.2f - %.2f = %.2f", a, b, c);
        break;

        case 'm' :
        c = a*b;
        printf("%.2f * %.2f = %.2f", a, b, c);
        break;

        case 'd' :
        if(b!=0)
        {
        c = a/b;
        printf("%.2f / %.2f = %.2f", a, b, c);
        }
        else
        {
            printf("Cannot divide by Zero");
        }
        break;

        default:
        printf("Please enter correct operator");
        break;
    }
    
}