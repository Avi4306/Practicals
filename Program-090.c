// Write a program to find length of a given string including and excluding spaces using pointers
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char *ptr = str;
    printf("Enter a string:\n");
    fgets(str, 100, stdin);
    int len_including_space = 0, len_excluding_space = 0, space_count = 0;
    while (*ptr != '\0' && *ptr != '\n')
    {
        if (*ptr == ' ')
        {
            space_count++;
        }
        len_including_space++;
        ptr++;
    }
    len_excluding_space = len_including_space - space_count;
    printf("Length of string including spaces: %d\n", len_including_space);
    printf("Length of string excluding spaces: %d\n", len_excluding_space);
    return 0;
}
