/*A file called "LNMIITSTUDENT.JAVA" contains information such as student roll number, name and total marks. Write a
C program to create a file to store details of N students*/
#include <stdio.h>
#include <string.h>
struct Student
{
    int roll_no;
    char name[30];
    float total_marks;
};
void write_student_details(FILE *fptr, struct Student S)
{
    fprintf(fptr, "Roll number: %d\n", S.roll_no);
    fprintf(fptr, "Name: %s\n", S.name);
    fprintf(fptr, "Total marks: %.2f\n", S.total_marks);
    fprintf(fptr, "\n");
}
int main()
{
    FILE *fptr = fopen("LNMIITSTUDENT.JAVA", "w");
    int N;
    printf("Enter number of students: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printf("\nEnter details of student %d:\n", i);
        struct Student S;
        printf("Enter roll number: ");
        scanf("%d", &S.roll_no);
        printf("Enter name: ");
        getchar();
        fgets(S.name, sizeof(S.name), stdin);
        S.name[strcspn(S.name, "\n")] = '\0';
        printf("Enter total marks: ");
        scanf("%f", &S.total_marks);
        write_student_details(fptr, S);
    }
    fclose(fptr);
    return 0;
}