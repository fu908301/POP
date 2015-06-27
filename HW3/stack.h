#include "list.h"
#ifndef STACK_H
#define STACK_H
#define STACK_DEC(T)\
void TEMPLATE (push,T)(list** newptr,list** headptr,list** tailptr);
void pop(list** headptr,list** tailptr);
STACK_DEC(char);
STACK_DEC(short);
STACK_DEC(int);
STACK_DEC(long);
STACK_DEC(float);
STACK_DEC(double);
#endif
