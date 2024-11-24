// Write a C program to count the number of vowels in a string using pointer
#include <stdio.h>

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
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            count++;
        }
        ptr++;
    }
    printf("The number of vowels in the string \"%s\" : %d", str, count);

    return 0;
}