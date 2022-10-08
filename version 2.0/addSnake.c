#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include "header_s.h"

void addSnake(int snakerow, int snakecol, char snakeicon, struct Node *start)
{
    if (start == NULL)
    {
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        
        newnode->r = snakerow;
        newnode->c = snakecol;
        newnode->icon = snakeicon;
        newnode->next = NULL;
        start = newnode;

        
    }
    else
    {
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        
        newnode->r = snakerow;
        newnode->c = snakecol;
        newnode->icon = snakeicon;
        newnode->next = start;
        start = newnode;

        
    }
}