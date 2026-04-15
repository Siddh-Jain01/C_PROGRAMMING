#include <stdio.h>

// Structure definition
struct Book {
    int id;
    char name[50];
    char author[30];
    int price;
};

int main() {
  
//     struct Book b;


//     printf("Enter book id\n ");
//     scanf("%d",&b.id);
//     printf("Enter name\n ");
//     scanf("%c",&b.name);
//     printf("Enter author\n");
//     scanf("%c",&b.author);
//     printf("Enter price\n");
//     scanf("%f",&b.price);
struct Book b[5];

 int i ,n ;

       printf("enter the number book ");
       scanf("%d,&n");

       for (i=0;i<n;i++){
    printf("Enter book id\n ");
    scanf("%d",&b[i].id);
    printf("Enter name\n ");
    scanf("%c",&b[i].name);
    printf("Enter author\n");
    scanf("%c",&b[i].author);
    printf("Enter price\n");
    scanf("%f",&b[i].price);
        }




 



    
    return 0;
}
