#include <stdio.h>
#include <stdlib.h>
#include "list_ptr_to_float.h"

void build(float* value)
{
    newptr=mymalloc(sizeof(struct node));
    newptr->value=value;
    newptr->prev=NULL;
    newptr->next=NULL;
}

    


