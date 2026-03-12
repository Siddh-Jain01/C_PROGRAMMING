#include<stdio.h>
int main(){
    int a[3] [3], row,coloum;
    printf("enter the size of row ");
    scanf("%d",&row);
    printf("enter the size of coloum ");
    scanf("%d",&coloum);
    printf("%d",a[row] [coloum]);
    printf("enter the elements in the matrix");
    for (int i=0;i<row;i++){
        for (int j=0;j<coloum;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<coloum;j++){
            printf("%d\n",a[row][coloum]);
        }
        printf("\n");
    }
 
    
return 0;

}