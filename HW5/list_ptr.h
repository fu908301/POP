#ifndef LIST_PTR_H
#define LIST_PTR_H

#define CAT(X,Y) X##_##Y
#define TEMPLATE(X,Y) CAT(X,Y)
#include <stdio.h>
#include "mm.h"
#include "list.h"

#define FUN_PTR_DEC(T)\
void TEMPLATE(build_ptr,T)(list** newptr,int typen,T data);
FUN_PTR_DEC(char);
FUN_PTR_DEC(short);
FUN_PTR_DEC(int);
FUN_PTR_DEC(long);
FUN_PTR_DEC(float);
FUN_PTR_DEC(double);

#endif 
