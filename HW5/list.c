#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
#define FUNC_USE(T)\
void TEMPLATE(build,T)(list** newptr,int typen,T data){\
	list* temp=(list*)mymalloc(sizeof(list));\
	temp->typen=typen;\
	if(typen==0)temp->data.my_char=data;\
	if(typen==1)temp->data.my_short=data;\
	if(typen==2)temp->data.my_int=data;\
	if(typen==3)temp->data.my_long=data;\
	if(typen==4)temp->data.my_float=data;\
	if(typen==5)temp->data.my_double=data;\
	temp->prev=NULL;\
	temp->next=NULL;\
	*newptr=temp;\
}
FUNC_USE(char);
FUNC_USE(short);
FUNC_USE(int);
FUNC_USE(long);
FUNC_USE(float);
FUNC_USE(double);
