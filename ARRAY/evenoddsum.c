#include<stdio.h>
int main(){
    int arr[7]={1,3,4,5,6,7,8};
    int sumeven= 0;
    int  sumodd =0;
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sumeven=sumeven+arr[i];
        }
        else{
            sumodd=sumodd+arr[i];
        }
    }
        printf("sum of even no. is = %d\n",sumeven );
        printf("sum of odd no. is = %d\n",sumodd );
        printf("Diffrence of both = %d",sumeven-sumodd);
        
        return 0;
}