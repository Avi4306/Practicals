//Converting Temperature from Farenheit to Centigrade degrees
#include<stdio.h>
int main()

{
    float farenheit, centigrade;

    printf("Enter Tempertaure in farenheit: ");
    scanf("%f", &farenheit);

    centigrade = ((farenheit - 32) * 5) / 9;

    printf("The temperature in Centigrade degrees is: %.2f", centigrade);
}