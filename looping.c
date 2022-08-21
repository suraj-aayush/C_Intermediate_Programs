#include <stdio.h>

int main() {

//---------------------------------------------------------------------------------------------------------

// que 2 , even no, betn 1 to 50
//using for loop


int a;
for (a=1;a<=50;a++)
{
    if (a%2==0)
    {printf("%d \n",a);
    }
    



}
printf("\n \n");


// -------------------------------------------------------------------------------------------------------------

// que 2. , 1 to 50 print even numbers 
// using while loop


int i=1;
while (i<51){

if (i%2==0)
{printf("%d \n",i);}
i++;
}

// que 4 , table of any number

int b, c=1;
printf("enter any number ");
scanf("%d",&b);
while (c<11)
{
    printf("%d \n",b*c);
    c++;
}

//-------------------------------------------------------------------------------------------------------------------

// que 5, input number is prime or not

int n=100,I=1,counter=0;
// printf("enter any number");
// scanf("%d",&n);

while (I<=n)
{
    if(n%I==0)
    {
        counter++;
    }
    I++;

}

if (counter==2)
{printf("%d ",I);}

// else {
//     printf("%d is not a prime number ",I);}


//-----------------------------------------------------------------------------------------------
 //que 3 ,   sum of digits of a number

 int p,sum=0,r;
 while (p>0)
{
 r=p%10;



}




return 0;
}