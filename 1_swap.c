#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int *, int *);

int main(){
int x,y,i;
printf("enter 1st value ");
scanf("%d",&x);

printf("enter 2nd value ");
scanf("%d",&y);

swap(&x , &y);
printf("%d is 1st after changed \n",x);
printf("%d is 2nd after changed \n",y);

return 0;
}

void swap (int *ptr1, int *ptr2 ){
    int t;
    
        t= *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = t;

}