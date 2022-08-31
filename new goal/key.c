#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include "header.h"

void input(int height, int width, char *border[], int food[], int head[], int tail[], int *snakePosition, int snakeSize, int UNBEATABLE)
{
    char key;

    static struct termios oldt, newt;

    tcgetattr(STDIN_FILENO, &oldt);

    newt = oldt;

    newt.c_lflag &= ~(ICANON);

    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    while ((key = getchar()))
    {

        switch (key)
        {
        case 'a':

            position(height, width, border, food, '<', head, tail, snakePosition, snakeSize, UNBEATABLE);
            draw(height, width, border, snakePosition);
            break;
        case 's':

            position(height, width, border, food, 'v', head, tail, snakePosition, snakeSize, UNBEATABLE);
            draw(height, width, border, snakePosition);
            break;
        case 'd':

            position(height, width, border, food, '>', head, tail, snakePosition, snakeSize, UNBEATABLE);
            draw(height, width, border, snakePosition);
            break;
        case 'w':

            position(height, width, border, food, '^', head, tail, snakePosition, snakeSize, UNBEATABLE);
            draw(height, width, border, snakePosition);
            break;
        default:
            draw(height, width, border, snakePosition);
            printf("invalid key\n");
            break;
        }
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}
