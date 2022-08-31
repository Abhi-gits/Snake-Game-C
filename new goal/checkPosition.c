#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

void position(int height, int width, char *border[], int food[], char input, int head[], int tail[], int *snakePosition, int snakeSize, int UNBEATABLE)
{
    if (input == '>')
    {
        if (border[head[0]][head[1] + 1] == 'X')
        {
            printf("CAN NOT MOVE IN COLLAPSED AREA.....\n");
        }
        else if (border[head[0]][head[1] + 1] == '*')
        {
            printf("CAN NOT MOVE INSIDE WALL.....\n");
        }
        else
        {
            if (((border[head[0]][head[1] + 1] == '*' || border[head[0]][head[1] + 1] == 'X') &&
            (border[head[0]][head[1] - 1] == '*' || border[head[0]][head[1] - 1] == 'X') &&
            (border[head[0]+1][head[1]] == '*' || border[head[0]+1][head[1]] == 'X') &&
            (border[head[0]-1][head[1]] == '*' || border[head[0]-1][head[1]] == 'X')
            ) && UNBEATABLE == 0)
            {
                printf("You lose :(\n");
                exit(0);
            }
            
            else if (border[head[0]][head[1] + 1] == 'G')
            {
                printf("You win! :)\n");
                exit(0);
            }

            else
            {
                border[head[0]][head[1] + 1] = 'P';
                border[head[0]][head[1]] = '0';
                head[1] = head[1] + 1;
            }
        }
    }
    else if (input == '<')
    {
        if (border[head[0]][head[1] - 1] == 'X')
        {
            printf("CAN NOT MOVE IN COLLAPSED AREA.....\n");
        }
        else if (border[head[0]][head[1] - 1] == '*')
        {
            printf("CAN NOT MOVE INSIDE WALL.....\n");
        }
        else
        {
            if (((border[head[0]][head[1] + 1] == '*' || border[head[0]][head[1] + 1] == 'X') &&
            (border[head[0]][head[1] - 1] == '*' || border[head[0]][head[1] - 1] == 'X') &&
            (border[head[0]+1][head[1]] == '*' || border[head[0]+1][head[1]] == 'X') &&
            (border[head[0]-1][head[1]] == '*' || border[head[0]-1][head[1]] == 'X')
            ) && UNBEATABLE == 0)
            {
                printf("You lose :(\n");
                exit(0);
            }
            else if (border[head[0]][head[1] - 1] == 'G')
            {
                printf("You win! :)\n");
                exit(0);
            }
            else
            {
                border[head[0]][head[1] - 1] = 'P';
                border[head[0]][head[1]] = '0';
                head[1] = head[1] - 1;
            }
        }
    }
    else if (input == '^')
    {
        if (border[head[0]-1][head[1]] == 'X')
        {
            printf("CAN NOT MOVE IN COLLAPSED AREA.....\n");
        }
        else if (border[head[0]-1][head[1]] == '*')
        {
            printf("CAN NOT MOVE INSIDE WALL.....\n");
        }
        else
        {
            if (((border[head[0]][head[1] + 1] == '*' || border[head[0]][head[1] + 1] == 'X') &&
            (border[head[0]][head[1] - 1] == '*' || border[head[0]][head[1] - 1] == 'X') &&
            (border[head[0]+1][head[1]] == '*' || border[head[0]+1][head[1]] == 'X') &&
            (border[head[0]-1][head[1]] == '*' || border[head[0]-1][head[1]] == 'X')
            ) && UNBEATABLE == 0)
            {
                printf("You lose :(\n");
                exit(0);
            }
            else if (border[head[0]-1][head[1]] == 'G')
            {
                printf("You win! :)\n");
                exit(0);
            }
            else
            {
                border[head[0]-1][head[1]] = 'P';
                border[head[0]][head[1]] = '0';
                head[0] = head[0] - 1;
            }
        }
    }
    else if (input == 'v')
    {
        if (border[head[0]+1][head[1]] == 'X')
        {
            printf("CAN NOT MOVE IN COLLAPSED AREA.....\n");
        }
        else if (border[head[0]+1][head[1]] == '*')
        {
            printf("CAN NOT MOVE INSIDE WALL.....\n");
        }
        else
        {
            if (((border[head[0]][head[1] + 1] == '*' || border[head[0]][head[1] + 1] == 'X') &&
            (border[head[0]][head[1] - 1] == '*' || border[head[0]][head[1] - 1] == 'X') &&
            (border[head[0]+1][head[1]] == '*' || border[head[0]+1][head[1]] == 'X') &&
            (border[head[0]-1][head[1]] == '*' || border[head[0]-1][head[1]] == 'X')
            ) && UNBEATABLE == 0)
            {
                printf("You lose :(\n");
                exit(0);
            }
            else if (border[head[0]+1][head[1]] == 'G')
            {
                printf("You win! :)\n");
                exit(0);
            }
            else
            {
                border[head[0]+1][head[1]] = 'P';
                border[head[0]][head[1]] = '0';
                head[0] = head[0] + 1;
            }
        }
    }

    int rc[] = {height, width};
    srand(time(0));
    int *collapse = getarray(rc, border);
    border[collapse[0]][collapse[1]] = 'X';
}