//Write a program in C to print all permutations of a given string using pointers
#include <stdio.h>
#include <string.h>
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void permute(char *ptr, int l, int r)
{
    if (l == r)
    {
        printf("%s\n", ptr); // Print the string when we reach the end of it
    }
    for (int i = l; i <= r; i++)
    {
        swap(ptr+l, ptr+i); // Swap the current character with the first one
        permute(ptr, l + 1, r); // Recursively generate permutations for the remaining substring
        swap(ptr+l, ptr+i); // Backtrack: Undo the swap
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}