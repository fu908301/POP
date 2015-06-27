#include <stdio.h>
#include <stdlib.h>
#include "stack_long.h"
long pop()
{
  long x;
  if(head==NULL)
  {
    printf("There is nothing in the stack\n");
  }
  else
  {
    x=head->value;
    head=head->next;
    myfree(temp);
    printf("You pop a number %ld\n",x);
    return x;
  }
}
void push()
{
  if(head==NULL)
  {
    head=newptr;  
  }
  else
  {
    newptr->next=head;
    head=newptr;
  }
}

