#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"
#define QUEUE_DEC(T)\
void TEMPLATE(enqueue,T)(list** headptr,list** tailptr,list** newptr);
void dequeue(list** headptr,list** tailptr);

QUEUE_DEC(char);
QUEUE_DEC(short);
QUEUE_DEC(int);
QUEUE_DEC(long);
QUEUE_DEC(float);
QUEUE_DEC(double);

#endif
