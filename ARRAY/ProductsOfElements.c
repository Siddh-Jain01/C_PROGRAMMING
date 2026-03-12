#include<stdio.h>
int main(){
    int arr[5]={5,7,3,8,4};
    int product =1;
    for(int i=0;i<=4;i++){
        product =  (product * arr[i]);
    }
    printf("product of element is %d",product);




    return 0;
}