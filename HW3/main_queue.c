#include "queue.h"
#include "queue_ptr.h"
#include "list.h"
#include <stdio.h>
int main()
{
	list *newptr=NULL;
	list *headptr=NULL;
	list *tailptr=NULL;
	int choice1,choice2;
	char enter;
	char my_char;
	short my_short;
	int my_int;
	long my_long;
	float my_float;
	double my_double;
	printf("Which action you want to do? 1.enqueue 2.dequeue 3.exit\n");
    	scanf("%d",&choice1);
    	while(choice1>3||choice1<1)
    	{
        	printf("Out of range!Please input again\n");
        	scanf("%d",&choice1);
    	}
	while(choice1!=3)
	{
		if(choice1==1)
		{
			printf("Please choose a type then input a data to push:0.char 1.short 2.int 3.long 4.float 5.double\n");
			printf("or ptr to 6.char 7.short 8.int 9.long 10.float 11.double\n");
			scanf("%d",&choice2);
			while(choice2<0||choice2>11)
			{
				printf("Out of range!Please input type again\n");
				scanf("%d",&choice2);
			}
			if(choice2==0)
			{
				printf("Then input a word\n");
				scanf("%c %c",&enter,&my_char);
				build_char(&newptr,choice2,my_char);
				enqueue_char(&headptr,&tailptr,&newptr);
			}
			if(choice2==1)
			{
				printf("Then input data\n");
				scanf("%hd",&my_short);
				build_short(&newptr,choice2,my_short);
				enqueue_short(&headptr,&tailptr,&newptr);
			}
			if(choice2==2)
			{
				printf("Then input data\n");
				scanf("%d",&my_int);
				build_int(&newptr,choice2,my_int);
				enqueue_int(&headptr,&tailptr,&newptr);
			}
			if(choice2==3)
			{
				printf("Then input data\n");
				scanf("%ld",&my_long);
				build_long(&newptr,choice2,my_long);
				enqueue_long(&headptr,&tailptr,&newptr);
			}
			if(choice2==4)
			{
				printf("Then input data\n");
				scanf("%f",&my_float);
				build_float(&newptr,choice2,my_float);
				enqueue_float(&headptr,&tailptr,&newptr);
			}
			if(choice2==5)
			{
				printf("Then input data\n");
				scanf("%lf",&my_double);
				build_double(&newptr,choice2,my_double);
				enqueue_double(&headptr,&tailptr,&newptr);
			}
			if(choice2==6)
			{
				printf("Then input a word\n");
				scanf("%c %c",&enter,&my_char);
				build_ptr_char(&newptr,choice2,my_char);
				enqueue_ptr_char(&headptr,&tailptr,&newptr);
			}
			if(choice2==7)
			{
				printf("Then input data\n");
				scanf("%hd",&my_short);
				build_ptr_short(&newptr,choice2,my_short);
				enqueue_ptr_short(&headptr,&tailptr,&newptr);
			}
			if(choice2==8)
			{
				printf("Then input data\n");
				scanf("%d",&my_int);
				build_ptr_int(&newptr,choice2,my_int);
				enqueue_ptr_int(&headptr,&tailptr,&newptr);
			}
			if(choice2==9)
			{
				printf("Then input data\n");
				scanf("%ld",&my_long);
				build_ptr_long(&newptr,choice2,my_long);
				enqueue_ptr_long(&headptr,&tailptr,&newptr);
			}
			if(choice2==10)
			{
				printf("Then input data\n");
				scanf("%f",&my_float);
				build_ptr_float(&newptr,choice2,my_float);
				enqueue_ptr_float(&headptr,&tailptr,&newptr);
			}
			if(choice2==11)
			{
				printf("Then input data\n");
				scanf("%lf",&my_double);
				build_ptr_double(&newptr,choice2,my_double);
				enqueue_ptr_double(&headptr,&tailptr,&newptr);
			}
		}
		if(choice1==2)
		{
			dequeue(&headptr,&tailptr);	
		}
		printf("Which action you want to do? 1.enqueue 2.dequeue 3.exit\n");
       		scanf("%d",&choice1); 
        	while(choice1>3||choice1<1)
        	{
            		printf("Out of range!Please input again\n");
            		scanf("%d",&choice1);
        	} 
	}
	return 0;
}
