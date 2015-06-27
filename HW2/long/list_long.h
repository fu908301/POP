#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
typedef struct node
{
    long value;
    struct node *prev;
    struct node *next;
}NODE;
NODE *newptr;
NODE *temp;
NODE *head;
NODE *tail;
NODE *current;
void build(long value);
void insert_back(long value);
void insert_front(long value);
void To_next();
void To_previous();

