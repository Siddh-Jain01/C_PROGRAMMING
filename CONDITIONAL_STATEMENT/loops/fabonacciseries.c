#include<stdio.h>
int main(){
    int n;
    //sum of nth term //
    printf("enter the number :");
    scanf("%d",&n);
    int a,b,sum;
    a=1;
    b=1;
    sum=0;
    for(int i=1;i<=n-2;i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    printf("the sum of %d term is %d",n,sum);



    return 0;
}