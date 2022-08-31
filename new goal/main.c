#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(int agrc, char const *argv[])
{
    if (atoi(argv[1]) == 1)
    {
        getSize(15, 20, 5, 5, 8, 8, 1);
    }

    else if (agrc != 7)
    {
        system("clear");
        printf("incorrect amount of arguments. Program usage:\n./escape <row_map> <col_map> <row_player> <col_player> <row_goal> <col_goal>\n");
    }
    else
    {
        getSize(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), 0);
    }

    return 0;
}