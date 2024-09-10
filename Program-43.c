/*Write a C Program to calculate the commission for a sales representative as per the sales amount given below
If sales <= Rs. 500, commission is 5%
If sales > Rs. 500 but <= 2000, commission is Rs. 35 plus 10% above Rs. 500
If sales > Rs. 2000 but <= 5000, commission is Rs. 185 plus 12% above Rs. 2000
If sales > Rs. 5000, commission is 12.5%*/
#include<stdio.h>
int main()
{
    float sales, commission;

    printf("Enter sales in rupees: \n");
    scanf("%f", &sales);

    if(sales<0)
    {
        printf("Error! Entered sales is negative\n");
        return 1;
    }
    if(sales<=500)
    {
        commission = (5*sales)/100;
    }
    else if(sales<=2000)
    {
        commission = 35 + (10*(sales-500))/100;
    }
    else if(sales<=5000)
    {
        commission = 185 + (12*(sales-2000))/100;
    }
    else
    {
        commission = (12.5*sales)/100;
    }
    printf("The commission for sales of Rs. %.2f is Rs. %.2f", sales, commission);
}