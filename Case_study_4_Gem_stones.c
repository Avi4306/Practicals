/*John has discovered various rocks. Each rock is composed of various elements, and each element is represented by a lowercase latin
letter from 'a' to 'z'. An element can be present multiple times in a rock. An element is called 'gem-element' if it occurs at least
once in each of the rocks*/
#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    printf("Enter number of rocks:\n");
    scanf("%d", &N);
    if (N<1 || N>100)
    {
        printf("Entered value is not in constraint\n");
        return 1;
    }
    
    char rocks[N][100];

    for (int i = 0; i < N; i++)
    {
        scanf("%s", &rocks[i]);
    }
    int Gem = 0;
    for (int i = 97; i <= 122; i++)
    {
        int count = 0;
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < strlen(rocks[j]); k++)

            {
                if ((int)rocks[j][k] == i)
                {
                    count++;
                    break;
                }
            }
        }
        if (count == N)
        {
            Gem++;
        }
    }
    printf("Number of Gem-elements = %d", Gem);
}