#include <stdio.h>
#include <stdlib.h>
#include "list_long.h"

void build(long value)
{
    newptr=mymalloc(sizeof(struct node));
    newptr->value=value;
    newptr->prev=NULL;
    newptr->next=NULL;
}

    


