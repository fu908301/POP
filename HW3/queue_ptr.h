#ifndef QUEUE_PTR_H
#define QUEUE_H

#include "list_ptr.h"
#define QUEUE_PTR_DEC(T)\
void TEMPLATE(enqueue_ptr,T)(list** headptr,list** tailptr,list** newptr);

QUEUE_PTR_DEC(char);
QUEUE_PTR_DEC(short);
QUEUE_PTR_DEC(int);
QUEUE_PTR_DEC(long);
QUEUE_PTR_DEC(float);
QUEUE_PTR_DEC(double);

#endif
