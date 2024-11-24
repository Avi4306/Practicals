// Write a C program to copy a string in reverse order to another string variable using pointers
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
    int len = strlen(str);
    char reversed_str[len+1];
    char *ptr1 = &str[len-1];
    char *ptr2 = reversed_str;
    for (int i = 0; i < len; i++)
    {
        *ptr2 = *ptr1;
        ptr1--, ptr2++;
    }
    *ptr2 = '\0';
    puts(reversed_str);
    return 0;
}