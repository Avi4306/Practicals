//Gross Salary
#include<stdio.h>
int main()
{
    float basic_salary, HRA, DA, Bonus, Deduction, hra, da, gross_salary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    printf("Enter House Rent Allowance Percentage: ");
    scanf("%f", &HRA);

    printf("Enter Dearness Allowance Percentage: ");
    scanf("%f", &DA);

    printf("Enter Bonus Amount: ");
    scanf("%f", &Bonus);

    printf("Enter Deduction Amount: ");
    scanf("%f", &Deduction);

    hra = (HRA/100)*basic_salary;
    da = (DA/100)*basic_salary;
    gross_salary = basic_salary + hra + da + Bonus - Deduction;

    printf("Gross Salary is: %.2f", gross_salary);
}
