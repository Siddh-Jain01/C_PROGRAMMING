// 42_Swap_Two_Numbers.c

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("Name: Siddh jain\n");
    printf("After Swap: %d %d\n", a, b);
    printf("Name: Siddh jain\n");

    return 0;
}