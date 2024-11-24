//HR,MIN,SEC into total second
#include<stdio.h>
int main()
{
    int Hours, Minutes, Seconds, Total_Seconds;

    printf("Enter hours: ");
    scanf("%d", &Hours);

    printf("Enter minutes: ");
    scanf("%d", &Minutes);

    printf("Enter seconds: ");
    scanf("%d", &Seconds);

    Total_Seconds = Hours*60*60 + Minutes*60 + Seconds;
    printf("Total seconds: %d", Total_Seconds);
}
