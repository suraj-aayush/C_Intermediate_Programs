#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int i,n,j,c=0;
    char str[50],ch;
    FILE *p;
    p=fopen("lines.txt","w+");
    ch=getchar();
    printf("enter value of n ");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str,p);
    }

    rewind(p);

    while ((ch=getc(p))!=EOF)
    {
        if (ch=='\n')
        {
            c++;
        }
        
    }
    
    printf("%d is line ",c);
    //fclose(p);

return 0;
}