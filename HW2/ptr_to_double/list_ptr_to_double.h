#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
typedef struct node
{
    double* value;
    struct node *prev;
    struct node *next;
}NODE;
NODE *newptr;
NODE *temp;
NODE *head;
NODE *tail;
NODE *current;
void build(double *value);
void insert_back(double *value);
void insert_front(double *value);
void To_next();
void To_previous();

