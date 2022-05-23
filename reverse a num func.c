// write a function to reverse a number
#include <stdio.h>

void reverse(int a){
    int n, rem,reverse=0;
    printf("enter a number");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        reverse=reverse*10 + rem;
        n=n/10;
    }
}

int main(){
    void reverse();

    return 0;
}

