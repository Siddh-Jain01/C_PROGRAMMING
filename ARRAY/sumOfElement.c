#include<stdio.h>
int main(){
    int arr[7]={12,14,16,18,12,12,16};
    int a = arr[0];
    for(int i=0;i<=6;i++){
         if(a== arr[i]){
             printf("%d\n",arr[i]);
             }
         //printf("count of element is 3 ");
         
    }

    




    return 0;
}