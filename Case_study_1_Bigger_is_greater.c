// Given a word w, rearrange the letters of test cases. Each o+f the next t lines contains w. s is lexicographically greater than w.
#include <stdio.h>
#include <string.h>
int bigger_is_greater(char w[])
{
    char s[100];
    strcpy(s,w);
    int len = strlen(w);
    for (int i = len; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if ((int)s[j] < (int)s[j+1])
            {
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }   
        }
    }
    if (strcmp(s,w) == 0)
    {
        printf("no answer\n");
    }
    else
    {
        printf("%s", s);
    }
    
}
int main()
{
    int t;
    printf("Enter number of test cases:\n");
    scanf("%d", &t);

    char w[100];

    for (int i = 0; i < t; i++)
    {
        scanf("%s", &w);
        bigger_is_greater(w);
    }
}