#include<stdio.h>
int main (){
    int marks[10] = {95,89,78,34,76,23,92,56,48,12};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
        printf("%d",i);
        }
    }
    return 0;
}