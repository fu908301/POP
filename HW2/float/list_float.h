#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
typedef struct node
{
    float value;
    struct node *prev;
    struct node *next;
}NODE;
NODE *newptr;
NODE *temp;
NODE *head;
NODE *tail;
NODE *current;
void build(float value);
void insert_back(float value);
void insert_front(float value);
void To_next();
void To_previous();

