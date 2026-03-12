#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={1,2,3,4,4,3,2};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=1;i<=6;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
    
     else if(smax<arr[i] && max!=arr[i]){
            smax=max;
     }
    }

    printf("%d",smax);
    return 0;
}