// #include <string.h>
// #include <stdio.h>
// void main(){
//     char ch[50];
//     int i,l,t,flag=0;
//     printf("enter string");
//     gets(ch);

//     l=strlen(ch);
//     for (i=0; i<l/2; i++)
//     {
//         if(ch[i] != ch[l-1-i])
//         {flag++;}

//     }

//     if (flag==0)
//     {
//         printf("palindrome string \n");
//     }

//     else 
//     {printf("not palindrome \n");}

// printf("%s is the string ",ch);
// }


//---------using pointer


#include <stdio.h>
#include <string.h>
int main(){
int i,j,falg=0;
int l;
char str[50];


    printf("enter string ");
 gets(str);
l=strlen(str);

char *p;
p=str;

for ( i = 0; i <l/2; i++)
{
   if (*(p+i) != *(p + l-1-i) )
   {
       falg=1;
   }
   
}

if (falg==0)
{
    printf("palindrome ");
    /* code */
}

else{
    printf("not palindrome ");
}

return 0;
}
