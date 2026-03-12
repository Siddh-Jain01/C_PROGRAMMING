#include<stdio.h>
int main(){
    int arr[7]={1,3,4,5,6,7,8};
    int x = 4;
    int y;
    int  count = 0;
    for(int i=0;i<=6;i++){
        if(arr[i]>x){
            //y=arr[i];
            count=count+1;
        }
    }
    //for(int i=0;i<=6;i++)
   // printf("%d\n",y);
     printf("%d\n",count);
     return 0;
}