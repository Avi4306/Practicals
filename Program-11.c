//Total second into time
#include<stdio.h>
int main()
{
    int total_seconds, seconds, minutes, hours, remaining_seconds;

    printf("Enter total seconds: ");
    scanf("%d", total_seconds);

    hours = total_seconds/3600;
    remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds/60;
    seconds = remaining_seconds % 60;

    printf("Time in HH:MM:SS is: %2d:%2d:%2d", hours, minutes, seconds);
}