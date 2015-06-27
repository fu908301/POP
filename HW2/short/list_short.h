#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
typedef struct node
{
    short value;
    struct node *prev;
    struct node *next;
}NODE;
NODE *newptr;
NODE *temp;
NODE *head;
NODE *tail;
NODE *current;
void build(short value);
void insert_back(short value);
void insert_front(short value);
void To_next();
void To_previous();

