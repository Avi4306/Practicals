//Calculating Area of Triangle
#include<stdio.h>
int main()
{
    float base, height, area;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    area = (height * base) / 2;
    printf("The Area of Triangle with base %f and height %f is %.2f", base, height, area);
}