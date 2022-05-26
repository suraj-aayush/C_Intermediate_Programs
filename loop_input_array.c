#include <stdio.h>

int main() {
   int marks[5];
   int i;
   
   for (i=0;i<=4;i++)
   {
       printf("enter marks of subject %d ",i);
       scanf("%d",&marks[i]);
   }
    
    int j;
    for (j=0;j<=4;j++)
    {
        printf("marks of subject %d is %d \n",j,marks[j]);
    }
    return 0; }