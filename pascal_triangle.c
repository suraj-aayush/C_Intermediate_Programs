#include <stdio.h>
int fact(int);

int main(){
    int x,n;
    printf("enter num ");
    scanf("%d",&x);
    
     int i,d;
    for(i=1;i<=x;i++){
        for(int j=0;j<=i;j++){
            d=fact(i)/(fact(j)*fact(i-j));
            printf("%d ",d);
        }
        printf("\n");
    }
    
}

int fact (int x){
    int f=1,i;
   for(i=2;i<=x;i++){
       
      f=f*i;
   }
    
    return f;
}