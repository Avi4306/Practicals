//Program to check whether a given character is capital letter, small case letter, a digit or a special symbol
#include<stdio.h>
int main()
{
    char a;
    int ascii;
    printf("Enter a single character: ");
    scanf("%c", &a);

    ascii = (int)a;

    if(ascii>48 && ascii<57)
    {
        printf("%c is a digit", a);
    }
    else if(ascii>=65 && ascii<=90)
    {
        printf("%c is a capital letter", a);
    }
    else if(ascii>=97 && ascii<=122)
    {
        printf("%c is a small case letter", a);
    }
    else
    {
        printf("%c is a special symbol", a);
    }
}