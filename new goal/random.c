#include <stdio.h>
#include <stdlib.h>

int *getarray(int a[], char *border[])
{
    int xupper = a[0] - 2, yupper = a[1] - 2, xlower = 1, ylower = 1;
    int flag = 1;
    while (flag)
    {
        a[0] = (rand() % (xupper - xlower + 1)) + ylower;
        a[1] = (rand() % (yupper - ylower + 1)) + ylower;
        if (border[a[0]][a[1]] != 'X' && border[a[0]][a[1]] != 'P' && border[a[0]][a[1]] != 'G')
            flag = 0;
    }

    return a;
}
