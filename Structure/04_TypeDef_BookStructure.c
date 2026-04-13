#include<stdio.h>
#include<string.h>


int main(){

typedef struct book{
    int page;
    char name[50] ;
    int salary;

}book;
book a,b;

a.page= 280;
strcpy(a.name,"siddh");
a.salary=5000;
printf("page number : %d\nname : %s\nsalary : %d",a.page,a.name,a.salary);








}