#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=(n*2)-1;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}