#include <stdio.h>
#include <stdlib.h>
#include "list_char.h"

void build(char word)
{
    newptr=mymalloc(sizeof(struct node));
    newptr->word=word;
    newptr->prev=NULL;
    newptr->next=NULL;
}

    


