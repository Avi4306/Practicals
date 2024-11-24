//Write a program to count number of characters, words and lines in a text file
#include <stdio.h>
int main()
{
    FILE *fptr = fopen("Text.txt", "r");
    char ch;
    ch = fgetc(fptr);
    int line_count = 0, character_count = 0, word_count = 0, in_word = 0;
    while (ch != EOF)
    {
        character_count++;
        if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            if (in_word == 0)
            {
                word_count++;
                in_word = 1;
            }            
        }
        else
        {
            in_word = 0;
        }
        if (ch == '\n')
        {
            line_count++;
        }
        ch = fgetc(fptr);
    }
    if (ch != '\n' && character_count > 0)
    {
        line_count++;
    }
    fclose(fptr);
    printf("Number of characters: %d\n", character_count);
    printf("Number of words: %d\n", word_count);
    printf("Number of lines: %d\n", line_count);
    return 0;
}