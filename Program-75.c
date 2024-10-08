/*The annual examination results of 10 students are tabulated as follows:
Roll no.        Subject1      Subject2      Subject3

Write a program to read the data and determine the following:
(a) Total marks obtained by each student and the roll no. of the student who secured it
(b) The highest marks in each subject and the roll no. of the student who secured it
(c) The student who obtained highest total marks.*/
#include <stdio.h>
int main()
{
    int marks[10][5];
    for (int i = 0; i < 10; i++)
    {
        marks[i][0] = i + 1;
        printf("Enter marks for roll no. %d in Subject1, Subject2 and Subject 3:\n", i + 1);
        printf("Subject1: ");
        scanf("%d", &marks[i][1]);
        printf("Subject2: ");
        scanf("%d", &marks[i][2]);
        printf("Subject3: ");
        scanf("%d", &marks[i][3]);
        marks[i][4] = marks[i][1] + marks[i][2] + marks[i][3];
    }

    int Total_max = marks[0][4];
    for (int i = 1; i < 10; i++)
    {
        if (Total_max < marks[i][4])
        {
            Total_max = marks[i][4];
        }
    }
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i][4] == Total_max)
        {
            count++;
        }
    }
    int highest_roll_no[count];
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i][4] == Total_max)
        {
            highest_roll_no[j] = marks[i][0];
            j++;
        }
    }

    int Subject1_max = marks[0][1];
    for (int i = 1; i < 10; i++)
    {
        if (Subject1_max < marks[i][1])
        {
            Subject1_max = marks[i][1];
        }
    }
    int count1 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i][1] == Subject1_max)
        {
            count1++;
        }
    }
    int highest_roll_no1[count1];
    j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i][1] == Subject1_max)
        {
            highest_roll_no1[j] = marks[i][0];
            j++;
        }
    }

    int Subject2_max = marks[0][2];
    for (int i = 1; i < 10; i++)
    {
        if (Subject2_max < marks[i][2])
        {
            Subject2_max = marks[i][2];
        }
    }
    int count2 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i][2] == Subject2_max)
        {
            count2++;
        }
    }
    int highest_roll_no2[count2];
    j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i][2] == Subject2_max)
        {
            highest_roll_no2[j] = marks[i][0];
            j++;
        }
    }

    int Subject3_max = marks[0][3];
    for (int i = 1; i < 10; i++)
    {
        if (Subject3_max < marks[i][3])
        {
            Subject3_max = marks[i][3];
        }
    }
    int count3 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i][3] == Subject3_max)
        {
            count3++;
        }
    }
    int highest_roll_no3[count3];
    j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i][3] == Subject3_max)
        {
            highest_roll_no3[j] = marks[i][0];
            j++;
        }
    }
    printf("\nTotal marks obtained by each student: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Roll no.: %d, Total Marks: %d\n", i + 1, marks[i][4]);
    }
    printf("\nSubject1\n");
    printf("Highest marks scored: %d\n", Subject1_max);
    printf("Highest marks scored by roll no.: ");
    for (int i = 0; i < count1; i++)
    {
        printf("%d, ", highest_roll_no1[i]);
    }

    printf("\n\nSubject2\n");
    printf("Highest marks scored: %d\n", Subject2_max);
    printf("Highest marks scored by roll no.: ");
    for (int i = 0; i < count2; i++)
    {
        printf("%d, ", highest_roll_no2[i]);
    }

    printf("\n\nSubject3\n");
    printf("Highest marks scored: %d\n", Subject3_max);
    printf("Highest marks scored by roll no.: ");
    for (int i = 0; i < count3; i++)
    {
        printf("%d, ", highest_roll_no3[i]);
    }

    printf("\n\nTotal Marks\n");
    printf("Highest marks scored: %d\n", Total_max);
    printf("Highest marks scored by roll no.: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d, ", highest_roll_no[i]);
    }
}