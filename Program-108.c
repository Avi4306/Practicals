/*Without using inbuilt string functions, perform the following in C language:
A. Copy one string into another
B. Compare two strings
C. Concat two strings
D. Reverse a given string */
#include <stdio.h>
#include <string.h>
void strcopy(char destination[], char source[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
int strcomp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] > str2[i])
        {
            return 1;
        }
        else if (str1[i] < str2[i])
        {
            return -1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else if (str1[i] == '\0')
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
void strconcat(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }

    int j = 0;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}
void strreverse(char str1[])
{
    int len = strlen(str1), i = 0;
    while (str1[i] != '\0')
    {
        int start = 0, end = len-1;
        while (start < end)
        {
            char temp = str1[start];
            str1[start] = str1[end];
            str1[end] = temp;
            start++;
            end--;
        }
        i++;
    }
}
int main()
{
    char str1[100];
    char destination[100];
    printf("Enter a string:\n");
    fgets(str1, sizeof(str1), stdin);
    if (str1[strlen(str1) - 1] == '\n')
    {
        str1[strlen(str1) - 1] = '\0';
    }
    strcopy(destination, str1);
    printf("The string after copying: %s\n", destination);

    char str2[100];
    printf("Enter another string:\n");
    fgets(str2, sizeof(str2), stdin);
    if (str2[strlen(str2) - 1] == '\n')
    {
        str2[strlen(str2) - 1] = '\0';
    }
    printf("strcmp(str1,str2) = %d\n", strcomp(str1, str2));

    strconcat(str1, str2);
    printf("The concatenated string is: %s\n", str1);

    strreverse(str1);
    printf("The reverse of concatenated string is: %s\n", str1);
    return 0;
}