// write a function to reverse a number
#include <stdio.h>
void reverse(int a);

void main(){
    int n,a;
    printf("enter a number");
    scanf("%d",&n);
    reverse(n);
   
}
void reverse(int n){
    int rem;

    while(n!=0){
        rem=n%10;
       printf("%d",rem);
        n=n/10;
    }
    return 0;
}