#include<stdio.h>
int main(){
    int arr[5]={9,4,6,2,5};
    int max=0,min=0;
     max = arr[0];
     min=arr[0];
    for(int i=0;i<=5;i++){
        if(arr[i]<=min)
        min=arr[i];
        if (arr[i]>max)
        max=arr[i];
    }
    printf("%d \n",min);
    printf("%d",max);


    return 0;

}