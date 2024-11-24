//Converting earth's period of revolution from seconds to no. of day, hours and minutes
#include<stdio.h>
int main()
{
    float seconds, days, hours, minutes;
    seconds = 31558150;
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;

    printf("Period of revolution of earth in seconds: %.0f\n", seconds);
    printf("Period of revolution of earth in minutes: %.2f\n", minutes);
    printf("Period of revolution of earth in hours: %.2f\n", hours);
    printf("Period of revolution of earth in days: %.2f\n", days);
}
