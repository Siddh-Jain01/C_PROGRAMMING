#include<stdio.h>
int main(){
    int a[5];
    int sum1=0;
    int sum2=0;
    //int totalSum;
   
    printf("enter the element in frist array\n");
    for (int i=0;i<5;i++){
        scanf("%d", a[i]);
    }
    int b[5];
     printf("enter the element in second array\n");
    for (int i=0;i<5;i++){
        scanf("%d", b[i]);
    }
    for(int i=0;i<5;i++){
        sum1 = sum1 + a[i];
    }
     for(int i=0;i<5;i++){
        sum2 = sum2 + b[i];
    }
    printf("%d",sum1+sum2);
  
    return 0;
}







    