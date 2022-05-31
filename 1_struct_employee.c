#include <stdio.h>
#include <string.h>
#include <stdlib.h>

    struct emp
    {
        char name[30];
        int id;
        int age;
        char gender[10];
        int salary;
    };

int main(){

    struct emp a;
      printf("enter name ");
      gets(a.name);

      printf("enter gender ");
      gets(a.gender);

    printf("enter age, id, salary");
    scanf("%d %d %d",&a.age,&a.id,&a.salary);

// display all data

    printf("%sis name \n %s is gender \n %d is age\n%d is id\n %d is salary",a.name,a.gender,a.age,a.id,a.salary);


    

return 0;
}