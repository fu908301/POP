#include <stdio.h>
#include <stdlib.h>
#include "stack_int.h"
int main(){
    int a,b;
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
             printf("Please input an integer you want to push\n");
             scanf("%d",&b);
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
