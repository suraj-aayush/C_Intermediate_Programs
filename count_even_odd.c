#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    FILE *p, *q;
    int i,j,n;
    p=fopen("abc.txt","w+");
    q=fopen("odd.txt","w+");
printf("enter number of data to enter ");
scanf("%d",&n);

    for (i = 0; i <n; i++)
    {
        scanf("%d",&j);

        if (j>=0)
        {
           putw(j,p); 
        }
        if(j<0)
        {
            putw(j,q);
        }
    }
    rewind(p);
    rewind(q);
int t;
while ((t=getw(p))!= EOF)
{
    printf("%d is pos\n",t);
}
int h;
while ((h=getw(q))!=EOF)
{
    printf("%d is neg\n",h);
}
fclose(p);
fclose(q);
return 0;
}