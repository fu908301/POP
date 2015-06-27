#include <stdio.h>
#include <stdlib.h>
#include "mm.h"


void* mymalloc(size_t size)
{
   return malloc(size);
}
void* mycalloc(size_t number,size_t size)
{
    return calloc(number,size);
}
void* myrealloc(void* ptr,size_t size)
{
    return realloc(ptr,size);
}
void myfree(void* ptr)
{
    free(ptr);
}
