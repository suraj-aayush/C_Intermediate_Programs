#include<stdio.h>
int prime(int a);  //-------------declaration
int main(){

    int n;
    int j;
    printf("enter your num ");
    scanf("%d",&n);

   j =  prime(n);
   if (j==0)
   {printf("prime");}
   else 
   {printf("no prime");} //-----------calling

    return 0;
}

// ----------------------------definition

int prime(int n){
    int f,num=0;

    for (f=2;f<=n;f++)
    
    { 
       
        if (n%f==0)
        { num=num+1;
           
        }  
        
    }
    if (num==1)
    {return 0;}
    else {return 1;}
    
}