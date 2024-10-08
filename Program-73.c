/* An election is contested by 5 candidates. The candidate are numbered 1 to 5 and the voting is done by marking the candidate number on
the ballot paper. Write a program to read the ballots and count the votes cast for each candidate using an array variable count the votes
cast for each candidate using an array variable count. In case, a number, read is outside the range from 1 to 5, the ballot should be
considered as a 'spoilt ballot' and the program should also count the number of spoilt ballots.*/
#include <stdio.h>
int main()
{
    int votes[5] = {0};
    int totalvotes, vote, spoilt_ballot = 0;
    printf("Enter total number of votes: \n");
    scanf("%d", &totalvotes);
    for (int i = 0; i < totalvotes; i++)
    {
        printf("Enter vote for candidate (1-5) or 0 to exit voting\n");
        scanf("%d", &vote);

        if (vote == 0)
        {
            break;
        }
        else if (vote >= 1 && vote <= 5)
        {
            votes[vote - 1]++;
        }
        else
        {
            spoilt_ballot++;
        }
    }
    printf("Vote counts:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }
    printf("Spoilt ballots: %d\n", spoilt_ballot);
}