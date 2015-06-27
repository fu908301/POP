#ifndef LIST_H
#define LIST_H

#define CAT(X,Y)X##_##Y
#define TEMPLATE(X,Y) CAT(X,Y)

#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
union mytype{
	char my_char;
	float my_float;
	int my_int;
	short my_short;
	double my_double;
	long my_long;
	char* ptr_char;
	short* ptr_short;
	int* ptr_int;
	long* ptr_long;
	float* ptr_float;
	double* ptr_double;
};
typedef union mytype type;
struct mylist{
	int typen;
	type data;
	struct mylist *prev;
	struct mylist *next;
};
typedef struct mylist list;
#define FUNC_DEC(T)\
void TEMPLATE(build,T)(list** newptr,int typen,T data);
FUNC_DEC(char);
FUNC_DEC(float);
FUNC_DEC(int);
FUNC_DEC(short);
FUNC_DEC(double);
FUNC_DEC(long);
#endif
