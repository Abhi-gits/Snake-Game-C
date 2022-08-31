#include <stdlib.h>
#include <stdio.h>

void draw(int height, int width, char *border[], int *snakePosition)
{
    int i;
    int j;
    system("clear"); /*clear output screen*/
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (border[i][j] == '*')
            {
                printf("*");
            }

            else if (border[i][j] != '0')
            {
                if (border[i][j] == 'P')
                {
                    printf("P");
                }
                else if (border[i][j] == 'G')
                {
                    printf("G");
                }
                else if (border[i][j] == 'X')
                {
                    printf("X");
                }
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\nPress w to go up");
    printf("\nPress s to go down");
    printf("\nPress a to go left");
    printf("\nPress d to go right\n");
}
