// Program to read N nos and findout max and second max
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max, second_max;
    if (num[0] > num[1])
    {
        max = num[0];
        second_max = num[1];
    }
    else
    {
        max = num[1];
        second_max = num[2];
    }
    for (int i = 2; i < n; i++)
    {
        if (num[i] > max)
        {
            second_max = max;
            max = num[i];
        }
        else
        {
            if (num[i] > second_max)
            {
                second_max = num[i];
            }
        }
    }
    if (second_max == max)
    {
        printf("The maximum number is %d\n", max);
        printf("There is no second maximum");
    }
    else
    {
        printf("The maximum number is %d\n", max);
        printf("The second maximum number is %d\n", second_max);
    }
}
