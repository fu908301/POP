#include <stdio.h>
#include <stdlib.h>
#include "stack_ptr_to_char.h"
char pop()
{
  char x;
  if(head==NULL)
  {
    printf("There is nothing in the stack\n");
  }
  else
  {
    x=*(head->word);
    head=head->next;
    myfree(temp);
    printf("You pop a word %c\n",x);
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

