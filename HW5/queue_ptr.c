#include "queue_ptr.h"
#define QUEUE_PTR_USE(T)\
void TEMPLATE(enqueue_ptr,T)(list** headptr,list** tailptr,list** newptr){\
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
QUEUE_PTR_USE(char);
QUEUE_PTR_USE(short);
QUEUE_PTR_USE(int);
QUEUE_PTR_USE(long);
QUEUE_PTR_USE(float);
QUEUE_PTR_USE(double);
