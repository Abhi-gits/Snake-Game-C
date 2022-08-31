#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "header.h"

void getSize(int r, int c, int r_p, int c_p, int r_g, int c_g, int UNBEATABLE)
{
    char *TwoDBox[r];
    int *snakePosition;
    snakePosition = (int *)malloc(1 * sizeof(int));
    int snakeSize = 1;
    int i;
    int j;
    for (i = 0; i < r; i++)
        TwoDBox[i] = (char *)malloc(c * sizeof(char));

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
            {
                TwoDBox[i][j] = '*';
            }
            else
            {
                TwoDBox[i][j] = '0';
            }
        }
    }

    TwoDBox[r_p][c_p] = 'P';
    TwoDBox[r_g][c_g] = 'G';
    snakePosition[0] = c_p * c + r_p * r;

    int rc[] = {r, c};
    srand(time(0));
    int *food = getarray(rc, TwoDBox);

    draw(r, c, TwoDBox, snakePosition);

    int head[2] = {r_p, c_p};
    int tail[2] = {1, 1};

    input(r, c, TwoDBox, food, head, tail, snakePosition, snakeSize, UNBEATABLE);
    /* Code for further processing and free the
      dynamically allocated memory */
    for (i = 0; i < r; i++)
        free(TwoDBox[i]);

    free(snakePosition);
    free(food);
}