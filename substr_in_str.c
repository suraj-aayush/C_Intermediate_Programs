#include <stdio.h>
#include <string.h>
int main(){
    char a[50],b[50],t;
    int l1,l2,p,n,i;
    printf("enter main string ");
    gets(a);

    printf("enter substring ");
    gets(b);

    printf("enter position ");
    scanf("%d",&p);

l1=strlen(a);
l2=strlen(b);

for ( i=l1-1; i>=p; i--)
{
    a[l2+i]=a[i];
}

for ( i = 0; i < l2; i++)
{
    a[p+i]=b[i];
}

puts(a);
 
return 0;
}