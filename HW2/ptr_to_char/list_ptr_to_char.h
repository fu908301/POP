#include <stdio.h>
#include <stdlib.h>
#include "mm.h"
typedef struct node
{
    char *word;
    struct node *prev;
    struct node *next;
}NODE;
NODE *newptr;
NODE *temp;
NODE *head;
NODE *tail;
NODE *current;
void build(char *word);
void insert_back(char word);
void insert_front(char word);
void To_next();
void To_previous();

