#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
typedef struct node
{
    int value;
    struct node *prev;
    struct node *next;
}NODE;
NODE *newptr;
NODE *temp;
NODE *head;
NODE *tail;
NODE *current;
void build(int value);
void insert_back(int value);
void insert_front(int value);
void To_next();
void To_previous();

