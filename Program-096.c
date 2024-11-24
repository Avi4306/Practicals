// Write a C program to sort the given N number of strings in ascending order using pointers
#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    printf("Enter number of strings:\n");
    scanf("%d", &N);
    getchar();
    char str[N][100], sorted[N][100];
    char *ptr1, *ptr2;
    for (int i = 0; i < N; i++)
    {
        printf("Enter string %d:\n", i + 1);
        fgets(str[i], 100, stdin);
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            if (str[i][j] == '\n')
            {
                str[i][j] = '\0';
                break;
            }
        }
    }
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            ptr1 = str[i];
            ptr2 = str[j];
            if (strcmp(ptr1, ptr2) > 0)
            {
                char temp[100];
                strcpy(temp, ptr1);
                strcpy(ptr1, ptr2);
                strcpy(ptr2, temp);
            }
        }
    }
    printf("Ascending Order:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}
