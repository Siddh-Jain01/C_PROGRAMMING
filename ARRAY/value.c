#include<stdio.h>
int main(){
    int a[8];
    printf("enter the number :");
    for(int i=0;i<=8;i++){
        scanf("%d",&a[i]);
    }
    for(int i=8;i>=0;i--){
        printf("%d\n",a[i]);
    }
return 0;
}