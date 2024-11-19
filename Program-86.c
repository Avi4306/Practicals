//Write a function to read line of text and find out length of string
#include <stdio.h>
#include <string.h>
int length(char string[])
{
    int length = len(string);
    if (string[length-1] == '\n')
    {
        length = length - 1;
    }
    printf("The length of string is %d", length);
    
}
int main()
{
    char string[100];
    printf("Enter a string:\n");
    fgets(string, sizeof(string), stdin);
    length(string);
}