#include<stdio.h>
#include<string.h>

 typedef struct cricketer{
    char name [20];
    int  age  ;
    int noOfmatches;
    float  average;

}cricketer;

int main(){
    cricketer arr[5];
    arr[0].age = 35;
    arr[0].noOfmatches = 550;
    arr[0].average = 80;
    strcpy(arr[0].name,"SACHIN TENDULKAR");

    
    arr[1].age = 34;
    arr[1].noOfmatches = 800;
    arr[1].average = 20;
    strcpy(arr[1].name,"VIRAT KHOLI");

    
    arr[2].age = 23;
    arr[2].noOfmatches = 400;
    arr[2].average = 90;
    strcpy(arr[2].name,"MS DHONI ");

    
    arr[3].age = 43;
    arr[3].noOfmatches = 650;
    arr[3].average = 70;
    strcpy(arr[3].name,"ROHIT SHARMA");

    arr[4].age = 25;
    arr[4].noOfmatches = 300;
    arr[4].average = 43;
    strcpy(arr[4].name,"BUMRAH");

    for(int i=0;i<5;i++){
        printf("\n-----%s------\nAge :%d\nNumber of test matches :%d\nAverage run : %f ",arr[i].name,arr[i].age,arr[i].noOfmatches,arr[i].average);
    }




}

