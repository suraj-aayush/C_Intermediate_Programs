#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i,j,n,s=0;
    FILE *p, *q, *r;
    int k;
    p=fopen("abc.txt","w+");
    q=fopen("even.txt","w+");
    r=fopen("add.txt","w+");
    printf("enter number of data to enter ");
    scanf("%d",&k);
    printf("enter data");
    for ( i = 0; i <k; i++)
    {
        scanf("%d",&n);
        if (n%2==0)
        {
            putw(n,q);
        }
        else
        {
            putw(n,r);
        }       
    }
rewind(q);
rewind(r);
    while ((j=getw(q))!=EOF)
    {
        printf("%d is even ",j);
    }
printf("\n");

    while ((j=getw(r))!=EOF)
    {
        printf("%d is odd",j);
    }
    
return 0;
}