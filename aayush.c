#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    FILE *p;
    int i,j,c=0,n;
    char str[50];
    p=fopen("abc.txt","w+");
    printf("enter ");
    for ( i = 0; i <3; i++)
    {
        scanf("%d",&n);
        if(n%7==0)
        {
            putw(n,p);
        }
    }
    rewind(p);
    int t;
    while ((t=getw(p))!=EOF)
    {
        printf("%d ",t);
    }
    

return 0;
}