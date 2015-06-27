#include "stack.h"
#define STACK_USE(T)\
void TEMPLATE(push,T)(list** newptr,list** headptr,list** tailptr){\
	list* temp;\
	temp=*newptr;\
	if(*headptr==NULL)\
	*headptr=temp;\
	else\
	{\
		temp->next=*headptr;\
		*headptr=temp;\
	}\
}
void pop(list** headptr,list** tailptr)
{
	list *tempptr;
	if(*headptr==NULL)
	{
		printf("There is nothing in the stack!\n");
	}
	else
	{
		tempptr=*headptr;
		*headptr=(*headptr)->next;
		if(tempptr->typen==0) printf("You pop a word %c\n",tempptr->data.my_char);
		if(tempptr->typen==1) printf("You pop a number %hd\n",tempptr->data.my_short);
		if(tempptr->typen==2) printf("You pop a number %d\n",tempptr->data.my_int);
		if(tempptr->typen==3) printf("You pop a number %ld\n",tempptr->data.my_long);
		if(tempptr->typen==4) printf("You pop a number %f\n",tempptr->data.my_float);
		if(tempptr->typen==5) printf("You pop a number %lf\n",tempptr->data.my_double);
		if(tempptr->typen == 6)
		{
			printf("You pop a word %c\n", *tempptr->data.ptr_char);
			myfree(tempptr->data.ptr_char);
		} 	
		if(tempptr->typen == 7) 
		{
			printf("You pop a value %hd\n", *tempptr->data.ptr_short);
			myfree(tempptr->data.ptr_short);
		}
		if(tempptr->typen == 8)
		{
			printf("You pop a value %d\n", *tempptr->data.ptr_int);
			myfree(tempptr->data.ptr_int);
		}
		if(tempptr->typen == 9)
		{
			printf("You pop a value %ld\n", *tempptr->data.ptr_long);
			myfree(tempptr->data.ptr_long);
		}
		if(tempptr->typen == 10) 
		{
			printf("You pop a value %f\n", *tempptr->data.ptr_float);
			myfree(tempptr->data.ptr_float);
		}
		if(tempptr->typen == 11)
		{
			printf("You pop a value %lf\n", *tempptr->data.ptr_double);
			myfree(tempptr->data.ptr_double);
		}
		myfree(tempptr);
	}
	
}
STACK_USE(char);
STACK_USE(short);
STACK_USE(int);
STACK_USE(long);
STACK_USE(float);
STACK_USE(double);
