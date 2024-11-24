/* (A Guessing Game): With this program the user has to guess a number that the program has picked as the lucky number. It uses one for
loop and plenty of if statements.*/
#include<stdio.h>
int main()
{
    int lucky_no = 7;
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    if(N == lucky_no)
    {
        printf("Congrats! You have guessed the correct number");
    }
    else
    {
        printf("Wrong Guess!");
    }
}
