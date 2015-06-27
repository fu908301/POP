#include "queue.h"
#define QUEUE_USE(T)\
void TEMPLATE(enqueue,T)(list** headptr,list** tailptr,list** newptr){\
	list* temp;\
	temp=*newptr;\
	if(*headptr==NULL)\
		*headptr=*tailptr=temp;\
	else if(*headptr!=NULL)\
	{\
		temp->next=*tailptr;\
		*tailptr=temp;\
	}\
}
void dequeue(list** headptr,list** tailptr)
{
	list* temphead;
	list* current;
	list* temp;
	if(*headptr==NULL)
	{
		printf("There is nothing in queue.\n");
	}
	else 
	{
		current=*tailptr;
		if(current==*headptr)
		{
			temphead=*headptr;
			if(current->typen == 0) printf("You dequeue a word %c\n", current->data.my_char);
			if(current->typen == 1) printf("You dequeue a value %hd\n", current->data.my_short);
			if(current->typen == 2) printf("You dequeue a value %d\n", current->data.my_int);
			if(current->typen == 3) printf("You dequeue a value %ld\n", current->data.my_long);
			if(current->typen == 4) printf("You dequeue a value %f\n", current->data.my_float);
			if(current->typen == 5) printf("You dequeue a value %lf\n", current->data.my_double);
			if(current->typen == 6)
			{
				printf("You dequeue a word %c\n", *current->data.ptr_char);
				myfree(current->data.ptr_char);
			} 	
			if(current->typen == 7) 
			{
				printf("You dequeue a value %hd\n", *current->data.ptr_short);
				myfree(current->data.ptr_short);
			}
			if(current->typen == 8)
			{
				printf("You dequeue a value %d\n", *current->data.ptr_int);
				myfree(current->data.ptr_int);
			}
			if(current->typen == 9)
			{
				printf("You dequeue a value %ld\n", *current->data.ptr_long);
				myfree(current->data.ptr_long);
			}
			if(current->typen == 10) 
			{
				printf("You dequeue a value %f\n", *current->data.ptr_float);
				myfree(current->data.ptr_float);
			}
			if(current->typen == 11)
			{
				printf("You dequeue a value %lf\n", *current->data.ptr_double);
				myfree(current->data.ptr_double);
			}
			*headptr=NULL;
			myfree(current);
		}
		else
		{ 
			while(current->next!=*headptr)
			{
				current=current->next;
			}
			temp=*headptr;
			*headptr=current;
			current->next=NULL;
			if(temp->typen == 0) printf("You dequeue a word %c\n", temp->data.my_char);
			if(temp->typen == 1) printf("You dequeue a value %hd\n", temp->data.my_short);
			if(temp->typen == 2) printf("You dequeue a value %d\n", temp->data.my_int);
			if(temp->typen == 3) printf("You dequeue a value %ld\n", temp->data.my_long);
			if(temp->typen == 4) printf("You dequeue a value %f\n", temp->data.my_float);
			if(temp->typen == 5) printf("You dequeue a value %lf\n", temp->data.my_double);
			if(temp->typen == 6)
			{
				printf("You dequeue a word %c\n", *temp->data.ptr_char);
				myfree(temp->data.ptr_char);
			} 	
			if(temp->typen == 7) 
			{
				printf("You dequeue a value %hd\n", *temp->data.ptr_short);
				myfree(temp->data.ptr_short);
			}
			if(temp->typen == 8)
			{
				printf("You dequeue a value %d\n", *temp->data.ptr_int);
				myfree(temp->data.ptr_int);
			}
			if(temp->typen == 9)
			{
				printf("You dequeue a value %ld\n", *temp->data.ptr_long);
				myfree(temp->data.ptr_long);
			}
			if(temp->typen == 10) 
			{
				printf("You dequeue a value %f\n", *temp->data.ptr_float);
				myfree(temp->data.ptr_float);
			}
			if(temp->typen == 11)
			{
				printf("You dequeue a value %lf\n", *temp->data.ptr_double);
				myfree(temp->data.ptr_double);
			}
			myfree(temp);
		}

	}
}
QUEUE_USE(char);
QUEUE_USE(short);
QUEUE_USE(int);
QUEUE_USE(long);
QUEUE_USE(float);
QUEUE_USE(double);

