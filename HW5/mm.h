#ifndef MM_H
#define MM_H

#include <stdio.h>
#include <stddef.h>
#include <string.h>

#define NALLOC 1024
#define DEBUG(str) printf("[In %s: Line: %d]func:%s call %s.\n", __FILE__, __LINE__, __func__, str)

typedef long Align;

union header{
	struct{
		union header *ptr;
		unsigned size;
	}s;
	Align x;
};
typedef union header Header;

Header *morecore(size_t );
void* mymalloc(size_t );
void* myrealloc(void* , size_t );
void* mycalloc(size_t  , size_t );
void myfree(void* );

#endif
