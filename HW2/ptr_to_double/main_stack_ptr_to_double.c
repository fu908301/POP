#include <stdio.h>
#include <stdlib.h>
#include "stack_ptr_to_double.h"
int main(){
    int a;
    double *b;
    printf("Please input whitch action you want to do?1.pop 2.push 3.exit\n");
    scanf("%d",&a);
    while(a<1||a>3)
    {
      printf("Out of range!Please input whitch action you want to do?1.pop 2.push 3.exit\n");
      scanf("%d",&a);
    }
    while(a!=3)
       {
         if(a==1)
           {
             pop();
           }
         if(a==2)
           {
	     b=(double*)mymalloc(sizeof(double));
             printf("Please input a number you want to push\n");
             scanf("%lf",b);	     
             build(b);
             push();
           }        
         printf("Please input whitch action you want to do?1.pop 2.push 3.exit\n");
         scanf("%d",&a);
         if(a>3||a<1)
         {
            printf("Out of range!Please input whitch action you want to do?1.pop 2.push 3.exit\n");
            scanf("%d",&a);
         }
       }   
}
