#include <stdio.h>
#include <stdlib.h>
#include "list_ptr_to_double.h"

void build(double* value)
{
    newptr=mymalloc(sizeof(struct node));
    newptr->value=value;
    newptr->prev=NULL;
    newptr->next=NULL;
}

    


