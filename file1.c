// To Enter Multiple characters 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    FILE *p;
    char ch;

    int i,n,c=0;
    printf("enter number of character");
    scanf("%c",&n);

    p=fopen("abc.txt","w+");

while ((ch=getchar() != EOF))
{
    fputc(ch,p);    }
    rewind (p);

    while((ch=fgetc(p)) != EOF)
{
    printf("%c",ch);
}
fclose(p);
return 0;
}