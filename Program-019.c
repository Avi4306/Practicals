//Program to read a character and check whether it is a small case letter or not using conditional operator
#include<stdio.h>
int main()
{
    char c;

    printf("Enter a single character: ");
    scanf("%c", &c);

    printf("%c is %s", c, (c>='a' && c<='z') ? "a small case letter" : "not a small case letter");
}
