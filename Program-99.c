// Write a C program to read the text file and also count the number of vowels present int the file.
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    char ch = fgetc(fptr);
    int count = 0;
    while (ch != EOF)
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
        ch = fgetc(fptr);
    }
    fclose(fptr);
    printf("Number of vowels: %d\n", count);
    return 0;
}