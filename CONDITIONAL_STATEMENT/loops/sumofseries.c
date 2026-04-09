#include<stdio.h>
int main(){
    int n,sum;
    printf("enter the number :");
    scanf("%d",&n);
    //1 + 2 + 3 + 4 +
     for(int i=1;i<=n;i++){
        sum =sum+i;
    }
    printf("the sum of series is :%d",sum);


    return 0;
}