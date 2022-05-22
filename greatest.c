#include <stdio.h>
void greatest();
int main(){
    greatest();
    return 0;
}

void greatest()
{
    int i,j;
    printf("enter two num ");
    scanf("%d%d",&i,&j);

    if(i>j)
    {printf("%d is greatest ",i);}
    else
    {printf("%d is greater ",j);}
}