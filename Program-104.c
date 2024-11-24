//An enumeration with color names can be used in a switch statement to display the hexadecimal color code
#include <stdio.h>
enum color
{
    RED,
    GREEN,
    BLUE,
    YELLOW,
    WHITE,
    BLACK,
};
int main()
{
    int color;
    printf("Select a color (0-5):\n");
    printf("0: RED, 1: GREEN, 2: BLUE, 3: YELLOW, 4: WHITE, 5: BLACK\n");
    scanf("%d", &color);

    switch (color)
    {
    case RED:
        printf("The Hexadecimal color code for RED is #FF0000");
        break;
    case GREEN:
        printf("The Hexadecimal color code for GREEN is #00FF00");
        break;
    case BLUE:
        printf("The Hexadecimal color code for BLUE is #0000FF");
        break;
    case YELLOW:
        printf("The Hexadecimal color code for YELLOW is #FFFF00");
        break;
    case WHITE:
        printf("The Hexadecimal color code for WHITE is #FFFFFF");
        break;
    case BLACK:
        printf("The Hexadecimal color code for BLACK is #000000");
        break;
    
    default:
    printf("Unknown color");
        break;
    }
    return 0;
}