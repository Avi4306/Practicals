//Write a C program to add/append information to the file "LNMIITSTUDENT.DAT"
#include <stdio.h>

int main()
{
    FILE *fptr = fopen("LNMIITSTUDENT.DAT", "a");
    char info[100];
    printf("Enter information to add in the File:\n");
    scanf("%s", &info);
    fputs(info, fptr);
    fclose(fptr);
    return 0;
}