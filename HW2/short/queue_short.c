#include <stdio.h>
#include <stdlib.h>
#include "queue_short.h"
void enqueue(short value)
{
    if(head==NULL)
    {
        build(value);
        head=tail=newptr;
    }
    else if(head!=NULL)
    {
        build(value);
        newptr->next=tail;
        tail=newptr;
    }
}
void dequeue()
{
    short x;
    if(head==NULL)
    {
        printf("There is nothing in queue.\n");
    }
    else
    {
        current=tail;
        if(current==head)
        {
            x=head->value;
            head=NULL;
            printf("You dequeue a number %hd.\n",x);
        }
        else
        {
            while(current->next!=head)
            {
                current=current->next;
            }
            temp=head;
            head=current;
            current->next=NULL;
            x=temp->value;
            myfree(temp);
            printf("You dequeue a number %hd.\n",x);
        }
    }
}

