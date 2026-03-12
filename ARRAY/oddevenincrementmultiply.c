#include<stdio.h>
int main(){
    int arr[7]={23,35,64,74,35,47,52};
    for(int i=0;i<=6;i++){
        if(arr[i]%2!=0)
         arr[i]=arr[i]*2;
        
        else 
         arr[i]=arr[i]+10;
    }
    for(int i=0;i<=6;i++){
 printf("%d ",arr[i]);
    }
    
    return 0;
}