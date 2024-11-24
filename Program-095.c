/*Write a C program to declare a structure with data members employee number, employee name, basic pay
of the employee. Declare a structure pointer and array employ with 50 elements. The program should read
'N' employee details and print the list of all employee along with basic pay*/
#include <stdio.h>
struct Employees{
    int employee_number;
    char employee_name[30];
    float basic_pay;
};
int main()
{
    struct Employees *ptr;
    struct Employees employ[50];
    int N;
    printf("Enter the number of Employees:\n");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        ptr = &employ[i];
        printf("Enter details of employee %d:\n", i+1);
        printf("Enter employee number:\n");
        scanf("%d", &ptr->employee_number);
        getchar();
        printf("Enter employee name:\n");
        fgets(ptr->employee_name, sizeof(ptr->employee_name), stdin);
        for (int j = 0; ptr->employee_name[j] != '\0' ; j++)
        {
            if (ptr->employee_name[j] == '\n')
            {
                ptr->employee_name[j] = '\0';
                break;
            }
        }
        
        printf("Enter employee basic pay:\n");
        scanf("%f", &ptr->basic_pay);
        printf("\n\n");
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        ptr = &employ[i];
        printf("Employee %d\n", i+1);
        printf("Employee number: %d\n", ptr->employee_number);
        printf("Employee name: %s\n", ptr->employee_name);
        printf("Employee number: %.2f\n", ptr->basic_pay);
        printf("\n\n");
    }
    
    
    return 0;
}
