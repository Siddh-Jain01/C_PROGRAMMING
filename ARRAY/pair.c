#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=12;
    int totalpairs = 0;
    
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
             for(int K=j+1;K<=7;K++)

        {
            if(arr[i]+arr[j]+arr[K]==x){
                totalpairs++;
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[K]);
            }
        }
    }
    }
    printf("%d",totalpairs);
       
        
        return 0;
}