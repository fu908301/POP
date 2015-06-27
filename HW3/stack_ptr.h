#include "list_ptr.h"
#include "list.h"
#ifndef STACK_PTR_H
#define STACK_PTR_H
#define STACK_PTR_DEC(T)\
void TEMPLATE(push_ptr,T)(list** newptr,list** headptr,list** tailptr);
void pop(list** headptr,list** tailptr);
STACK_PTR_DEC(char);
STACK_PTR_DEC(short);
STACK_PTR_DEC(int);
STACK_PTR_DEC(long);
STACK_PTR_DEC(float);
STACK_PTR_DEC(doouble);
#endif
