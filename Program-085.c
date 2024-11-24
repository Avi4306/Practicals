//Write a function to read a character and check whether it is vowel or not
#include<stdio.h>
int vowel_or_not(char c)
{
    if (c == 'A' || c =='a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c=='o' || c=='U' || c == 'u')
    {
        printf("%c is a vowel", c);
    }
    else
    {
        printf("%c is not a vowel", c);
    }
}
int main()
{
    char c;
    printf("Enter a character: \n");
    scanf("%c", &c);
    vowel_or_not(c);
}
