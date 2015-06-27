#include "stack_ptr.h"
#include "stack.h"
#define STACK_PTR_USE(T)\
void TEMPLATE(push_ptr,T)(list** newptr,list** headptr,list** tailptr){\
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
STACK_PTR_USE(char);
STACK_PTR_USE(short);
STACK_PTR_USE(int);
STACK_PTR_USE(long);
STACK_PTR_USE(float);
STACK_PTR_USE(double);
