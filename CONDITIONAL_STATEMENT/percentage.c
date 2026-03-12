#include <stdio.h>
int main(){
    int maths,physics , sst ,english, hindi ,rollno ,sum;
    int name,grade ;
    float percentage;
    printf("Enter the name :")
    scanf("%s",&name);
    printf("Enter the rollno:");
    scanf("%d",&rollno);


    printf("enter the marks of maths :");
    scanf("%d",&maths);
    printf("enter the marks of physics:");
    scanf("%d",&physics);
    printf("enter the marks of sst:"); 
    scanf("%d",&sst);
    printf("enter the marks of english :");
    scanf("%d",&english);
    printf("enter the marks of hindi:");
    scanf("%d",&hindi);
    sum = maths + physics + sst + english + hindi



    return 0;

}