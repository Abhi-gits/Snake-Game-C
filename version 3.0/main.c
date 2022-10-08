#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(int agrc, char const *argv[])
{
   
    if (agrc != 3)
    {                    // then invalid number of parameters
        system("clear"); /*clear output screen*/
        printf("incorrect amount of arguments. Program usage:\n./snake <snake_file_name> <food_amount_to_win>\n");
    }
    else
    {
        getSize(argv[1], atoi(argv[2]));
    }

    return 0;
}