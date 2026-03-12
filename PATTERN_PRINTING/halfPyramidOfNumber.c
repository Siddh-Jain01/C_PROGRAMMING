#include<stdio.h>
int main(){
    int n;
    printf("enter the nunber:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
            printf("%d \t",j);
            printf("\n\n");
            
        
    
    }
    return 0;
}
