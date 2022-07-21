#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    FILE *p;
    p=fopen("abc.txt","w+");
    int i,n,j,t,sum=0;
    char str[50],ch;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&n);
        putw(n,p);
    }
rewind(p);
while ((t=getw(p))!=EOF)
{
    sum=sum+t;
}
printf("%d",sum);

return 0;
}