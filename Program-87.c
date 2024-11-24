/*WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE
MARKS ARE GREATHER THAN 500.(PASSING ARRAY OF STRUCTURE INTO FUNCTION).*/
#include <stdio.h>

struct Student
{
    char name[50];
    int marks;
};

void displayPassedStudents(struct Student students[], int n)
{
    printf("\nStudents with marks greater than 500:\n");
    for (int i = 0; i < n; i++)
    {
        if (students[i].marks > 500)
        {
            printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
        }
    }
}

int main()
{
    struct Student students[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    displayPassedStudents(students, 10);

    return 0;
}
