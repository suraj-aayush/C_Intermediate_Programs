#include <stdio.h>
#include <string.h>
int main(){
int n,i,g=0,s=0,e=0,j,t;
printf("enter number of elements ");
scanf("%d",&n);
    int ch[n];
    printf("enter elements ");
for ( i = 0; i <n; i++)
{
scanf("%d",&ch[i]);
}
int k;
printf("enter element to compare ");
scanf("%d",&k);
for ( i = 0; i <n; i++)
{
    if (k<ch[i])
    { 
        g++;
    }

    if (k>ch[i])
    {
        s++;
    }
    
    if (k==ch[i])
    {
        e++;
    }
}
printf("%d is greater %d is smaller %d is equal ",g,s,e);

return 0;
}