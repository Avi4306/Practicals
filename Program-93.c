// Write a C program using pointers to count the number of words in a given string
#include <stdio.h>
int count(char *ptr)
{
    int count = 0, in_word = 0;
    while (*ptr != '\0')
    {
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            count++;
            in_word = 1;
        }
        ptr++;
    }
    return count;
}
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
        }
    }
    char *ptr = str;
    printf("%d\n", count(ptr));
    return 0;
}