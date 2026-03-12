#include<stdio.h>
int main(){
    int input;
    printf("Enter the input:");
    scanf("%d",&input);
    switch(input)
    {
        case 1 :
        printf("Today is monday");
        break;
        case 2 :
        printf("Today is tuesday");
        break;
        case 3 :
        printf("Today is wednesday");
        break;
        case 4 :
        printf("Today is Thursday ");
        break;
        case 5 :
        printf("Today is friday");
        break;
        case 6 :
        printf("Today is saturday");
        break;
        case 7:
        printf("Today is sunday");
        break;

        
        default:printf("wrong input");
        

    }
    return 0;
}