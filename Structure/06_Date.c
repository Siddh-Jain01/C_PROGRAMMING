#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct Date{
    int date ;
    int month;
    int year ;

}Date;

int main(){

    Date a,b ;
    a.date = 26;
    a.month = 6;
    a.year = 2026;

    
    b.date = 26;
    b.month = 7;
    b.year = 2024;
 if(a.date==b.date){
 
     printf("the date are same ");
    }
 else
 printf("the date are different ");

    
    


}
