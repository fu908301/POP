#include <stdio.h>
#include <stdlib.h>
#include "stack_double.h"
double pop()
{
  double x;
  if(head==NULL)
  {
    printf("There is nothing in the stack\n");
  }
  else
  {
    x=head->value;
    head=head->next;
    myfree(temp);
    printf("You pop a number %lf\n",x);
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

