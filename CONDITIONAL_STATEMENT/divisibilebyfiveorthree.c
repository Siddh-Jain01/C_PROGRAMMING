#include <stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("divisible by five or three");
    }
    else{
        printf("not divisible five or three");
    }
    return 0;
}