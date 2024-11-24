//Program to print ASCII code of any character
#include<stdio.h>
int main()
{
    char a;
    int ascii;
    printf("Enter a single character: ");
    scanf("%c", &a);

    ascii = (int)a;
    printf("The ASCII code of %c is %d.", a, ascii);
}
