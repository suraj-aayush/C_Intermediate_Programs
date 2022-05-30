#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i,j,t;
    int *ptr;
    printf("enetr n ");
    int n;
    scanf("%d",&n);

ptr=(int *)calloc(n,sizeof(int));
for ( i = 0; i <n; i++)
{
    scanf("%d",ptr+i);
}

int sum=0, avg=0;
for ( i = 0; i <n; i++)
{
    sum=sum+ (*(ptr+i));
}

printf("%d is sum \n",sum);
printf("%d is avg ",sum/n);


return 0;
}