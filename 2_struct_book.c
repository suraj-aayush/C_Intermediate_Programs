#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct book
{
    char title[40];
    char author[50];
    int price;
    int page;
};

int main(){
    int i;
struct book a[20];
{
    for ( i = 0; i <2; i++)
    {
    
      printf("enter title %d\n",i+1);
      gets(a[i].title);

    printf("enter author %d\n",+1);
      gets(a[i].author);

    printf("enter price %d\n ,page %d\n",+1,i+1);
    scanf("%d %d",&a[i].price,&a[i].page);
}

for ( i = 0; i <2; i++)
{
    printf("%s is title,%s is author, %d is price,%d is  page \n",a[i].title,a[i].author,a[i].price,a[i].page);

    if (a[i].price > 100)
    {
         printf("  COSTLY %s is title,%s is author, %d is price,%d is page \n \n",a[i].title,a[i].author,a[i].price,a[i].page);
    }
    
}

};

  printf("%d %d",&a[i].price,&a[i].page);
    


return 0;
}