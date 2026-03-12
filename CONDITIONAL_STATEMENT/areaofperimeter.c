#include <stdio.h>
int main(){
    int l;
    printf("enter the length:");
    scanf("%d",&l);
    int b;
    printf("enter the breath:");
    scanf("%d",&b);
    int area;
    area = l*b;
    
    int perimeter;
    perimeter = 2*(l+b);
    
    if(area>perimeter){
        printf("area greater then perimeter ");
    }
    else{
        printf("area less then perimeter ");
    }
    return 0;
}
    