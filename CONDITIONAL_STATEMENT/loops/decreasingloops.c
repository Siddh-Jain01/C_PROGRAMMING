#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d ",&n);
    float a;
    a=100;
    for(int i=1;i<0;i++){
        printf("%d ",a);
        a=a*1/2;
    }
    

    return 0;
}