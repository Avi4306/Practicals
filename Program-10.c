//Calculating cutoff marks
#include<stdio.h>
int main()
{
    int M, P, C, E;
    float CM;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &M);
    printf("Enter marks in Physics: ");
    scanf("%d", &P);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &C);
    printf("Enter marks in Entrance Exams: ");
    scanf("%d", &E);

    CM = M/2 + P/2 + C/2 + E;
    
    printf("Cutoff Marks: %.2f", CM);
}