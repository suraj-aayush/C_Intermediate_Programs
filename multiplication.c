#include <stdio.h>
void multi();  // func declaration
int main() {
    multi();  // func calling
    return 0;
}

void multi()
{
    int a,b,multi;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    multi=a*b;

    printf("product is %d",multi);
}