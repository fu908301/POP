#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void build(int value)
{
    newptr=mymalloc(sizeof(struct node));
    newptr->value=value;
    newptr->prev=NULL;
    newptr->next=NULL;
}

    


