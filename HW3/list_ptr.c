#include "list_ptr.h"
#include "list.h"
#include "mm.h"
#include "stdio.h"
#define FUN_PTR_USE(T)\
void TEMPLATE(build_ptr,T)(list** newptr,int typen,T data){\
	list* tempptr=(list*)mymalloc(sizeof(list));\
	if(tempptr == NULL)\
	{\
		return;\
	}\
	else{\
	tempptr->typen=typen;\
	if(typen==6)\
	{\
		tempptr->data.ptr_char=(char*)mymalloc(sizeof(char));\
		*tempptr->data.ptr_char=data;\
	}\
	if(typen==7)\
	{\
		tempptr->data.ptr_short=(short*)mymalloc(sizeof(short));\
		*tempptr->data.ptr_short=data;\
	}\
	if(typen==8)\
	{\
		tempptr->data.ptr_int=(int*)mymalloc(sizeof(int));\
		*tempptr->data.ptr_int=data;\
	}\
	if(typen==9)\
	{\
		tempptr->data.ptr_long=(long*)mymalloc(sizeof(long));\
		*tempptr->data.ptr_long=data;\
	}\
	if(typen==10)\
	{\
		tempptr->data.ptr_float=(float*)mymalloc(sizeof(float));\
		*tempptr->data.ptr_float=data;\
	}\
	if(typen==11)\
	{\
		tempptr->data.ptr_double=(double*)mymalloc(sizeof(double));\
		*tempptr->data.ptr_double=data;\
	}\
	tempptr->prev=NULL;\
	tempptr->next=NULL;\
	*newptr=tempptr;\
	}\
}
FUN_PTR_USE(char);
FUN_PTR_USE(short);
FUN_PTR_USE(int);
FUN_PTR_USE(long);
FUN_PTR_USE(float);
FUN_PTR_USE(double);
