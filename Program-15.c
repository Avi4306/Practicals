//Program to read division of 5 subjects and print division
#include<stdio.h>
int main()
{
float maths, physics, chemistry, english, computer, Total, Pecentage;

    printf("Enter marks in Maths: ");
    scanf("%f", &maths);
    if (maths > 100)
    {
        printf("Invalid input, marks should be between 0 to 100");
        return 1;
    }
    printf("Enter marks in Physics: ");
    scanf("%f", &physics);
    if (physics > 100)
    {
        printf("Invalid input, marks should be between 0 to 100");
        return 1;
    }
    printf("Enter marks in Chemistry: ");
    scanf("%f", &chemistry);
    if (chemistry > 100)
    {
        printf("Invalid input, marks should be between 0 to 100");
        return 1;
    }

    printf("Enter marks in English: ");
    scanf("%f", &english);
    if (english > 100)
    {
        printf("Invalid input, marks should be between 0 to 100");
        return 1;
    }
    printf("Enter marks in Computer: ");
    scanf("%f", &computer);
    if (computer > 100)
    {
        printf("Invalid input, marks should be between 0 to 100");
        return 1;
    }

    Total = maths + physics + chemistry + english + computer;

    Pecentage = (Total * 100)/500;

    if (Pecentage >= 60)
    printf("Division : I");
    else if (Pecentage >= 50)
    printf("Division : II");
    else if (Pecentage >= 40)
    printf("Division : III");
    else if (Pecentage>= 30)
    printf("Division : IV");
    else
    printf("Fail");
}