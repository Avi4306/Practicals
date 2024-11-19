// Write a function to check whether a number is palindrome or not
#include<stdio.h>
int Palindrome_or_not(int a)
{
    int reverse, digit, b;
    b = a;
    reverse = 0;
    while(b != 0)
    {
        digit = b%10;
        reverse = reverse*10 + digit;
        b = b/10;
    }
    if (reverse == a)
    {
        printf("%d is a Palindrome number", a);
    }
    else
    {
        printf("%d is not a Palindrome number", a);
    }
    
    
}
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    Palindrome_or_not(N);
}