/*Write a program in c for the following
An electric company charges its domestic consumers as follows

    Consumption in unit                                       Rate for charge
          0-200                                               Rs 0.50 per unit
         201-400                                    Rs. 100 plus Rs. 0.65 per unit excess of 200
         401-600                                    Rs. 230 plus Rs. 0.85 per unit excess of 400
        Above 600                                   Rs. 425 plus Rs. 1.25 per unit excess of 600
Print the amount to be paid by the consumer*/
#include<stdio.h>
int main()
{
    float unit,amount;
    
    printf("Enter consumption of electricity in unit: \n");
    scanf("%f", &unit);
    
    if(unit<0)
    {
        printf("Error! Unit entered is negative\n");
        return 1;
    }
    if(unit<=200)
    {
        amount = 0.50*unit;
    }
    else if(unit<=400)
    {
        amount = 100 + 0.65*(unit-200);
    }
    else if(unit<=600)
    {
        amount = 230 + 0.85*(unit-400);
    }
    else
    {
        amount = 425 + 1.25*(unit-600);
    }
    printf("The amount to be paid is Rs. %.2f", amount);
}
