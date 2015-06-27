#include <stdio.h>
#include <stdlib.h>
#include "list_ptr_to_short.h"

void build(short* value)
{
    newptr=mymalloc(sizeof(struct node));
    newptr->value=value;
    newptr->prev=NULL;
    newptr->next=NULL;
}

    


