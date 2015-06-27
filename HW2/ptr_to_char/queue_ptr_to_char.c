#include <stdio.h>
#include <stdlib.h>
#include "queue_ptr_to_char.h"
void enqueue(char *word)
{
    if(head==NULL)
    {
        build(word);
        head=tail=newptr;
    }
    else if(head!=NULL)
    {
        build(word);
        newptr->next=tail;
        tail=newptr;
    }
}
void dequeue()
{
    char x;
    if(head==NULL)
    {
        printf("There is nothing in queue.\n");
    }
    else
    {
        current=tail;
        if(current==head)
        {
            x=*(head->word);
            head=NULL;
            printf("You dequeue a word %c.\n",x);
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
            x=*(temp->word);
            myfree(temp);
            printf("You dequeue a word %c.\n",x);
        }
    }
}

