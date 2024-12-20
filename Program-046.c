/*(USING MULTIDIMENSIONAL ARRAYS):
Let’s move away from vegetables and turn to a more practical application. You can
use arrays in a program to avoid a significant health and safety issue. As you may
know, wearing a hat that is too large is dangerous. It can fall over your eyes, so
you may bump into things, causing injury or even death. Equally, wearing a hat
that is too small can result in persistent headaches and make you look foolish.
This invaluable program will use arrays to work out your correct hat size in the
units commonly used in the United States and the United Kingdom, where hat
sizes typically vary from 6 1/2 to 7 7/8. Other countries have more transparent
hat sizes that cause fewer problems at home, but if you are a foreign visitor to the
United States or the United Kingdom, buying a hat while you are away can be even
more hazardous. You just enter the circumference of your head, in inches of
course, and your hat size will be displayed instantly:
// Program 5.6 Know your hat size - if you dare...
#include <stdio.h>
#include <stdbool.h> */
#include <stdio.h>

int main()
{

    float hat_size_inch[2][8] = {
        {20.5, 21, 21.25, 21.5, 21.75, 22, 22.25, 22.5},
        {20.5, 21, 21.25, 21.5, 21.75, 22, 22.25, 22.5}};

    float circumference;
    int i;
    int found = 0;

    printf("Enter your head circumference in inches: ");
    scanf("%f", &circumference);

    for (i = 0; i < 8; i++)
    {
        if (circumference == hat_size_inch[0][i])
        {
            printf("Your hat size is: US Size %.2f or UK Size %.2f\n",
                   circumference, circumference);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Sorry, no exact match found for this circumference.\n");
    }

    return 0;
}
