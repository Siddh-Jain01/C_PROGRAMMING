#include <stdio.h>
int main(){
    int a;
    printf("enter the number :");
    scanf("%d",&a);
    int b;
    printf("enter the number :");
    scanf("%d",&b);
    int c;
    printf("enter the number :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is greater");
    }
    if(b>c && b>a){
        printf("b is greater");
    }
    if(c>a && c>b){
        printf("c is greater");
    }
    else{
        printf(" all same");
    }
    return 0;

}