#include<stdio.h>
int main(){
    int n;
    
    // print gp 3 12 48 192 768 3072 12288 //
    printf("Enter the number :");
    scanf("%d",&n);
    int a=3;
    for(int i=3;i<=n;i++){
        printf("%d ",a);
        a=a*4;
    }
    return 0;

}