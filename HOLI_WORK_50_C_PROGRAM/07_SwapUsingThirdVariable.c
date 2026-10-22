// 07_Swap_Using_Third_Variable.c

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("Name: Siddh Jain\n");
    printf("After swap: %d %d\n", a, b);
    printf("Name: Siddh Jain\n");

    return 0;
}