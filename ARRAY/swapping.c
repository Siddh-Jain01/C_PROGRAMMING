#include<stdio.h>
int main(){
    int a[3],int b[3],int temp[5];
   
    printf("enter the element in frist array\n");
    for (int i=0;i<=2;i++){
        scanf("%d",a[i]);
    }
     printf("enter the element in second array\n");
    for (int i=0;i<=2;i++){
        scanf("%d",b[i]);
    }
    for(int i=0;i<=2;i++)
    {
    sum[i]=a[i]+b[i];
    }
    printf("sum is %d",sum[i]);
    return 0;
}