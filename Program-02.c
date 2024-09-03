//Calculating Total Marks and Percentage
#include<stdio.h>
int main()
{
    float maths, physics, chemistry, english, computer, Total, Pecentage;

    printf("Enter marks in Maths: ");
    scanf("%f", &maths);

    printf("Enter marks in Physics: ");
    scanf("%f", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks in English: ");
    scanf("%f", &english);

    printf("Enter marks in Computer: ");
    scanf("%f", &computer);

    Total = maths + physics + chemistry + english + computer;

    Pecentage = (Total * 100)/500;

    printf("Total Marks: %d\n", Total);
    printf("Percentage: %.2f", Pecentage);
}
