#include<stdio.h>
int main(){
int r,c;
printf("enter the number of rows:");
scanf("%d",&r);
printf("enter the number of coloums:");
scanf("%d",&c);

int arr[r][c];
printf("enter the elements:\n");

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[r][c]);
    }
}
printf("\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d",arr[r][c]);
    }
    printf("\n");
}






return 0;
}


