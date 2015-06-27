#include <stdio.h>
#include <stdlib.h>
#include "queue_ptr_to_int.h"
int main()
{
    int input1;
    int* input;
    printf("Which action you want to do? 1.enqueue 2.dequeue 3.exit\n");
    scanf("%d",&input1);
    while(input1>3||input1<1)
    {
        printf("Out of range!Please input again\n");
        scanf("%d",&input1);
    }
    while(input1!=3)
    {
        if(input1==1)
        {
	    input=(int*)mymalloc(sizeof(int));
            printf("Input an integer you want to enqueue.\n");
            scanf("%d",input);
            enqueue(input);
        }
        if(input1==2)
        {
            dequeue();
        }
        printf("Which action you want to do? 1.enqueue 2.dequeue 3.exit\n");
        scanf("%d",&input1); 
        while(input1>3||input1<1)
        {
            printf("Out of range!Please input again\n");
            scanf("%d",&input1);
        } 

    }
}
