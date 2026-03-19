// 13_Sum_of_First_N_Natural_Numbers.c

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Name: Siddh Jain\n");
    printf("Sum = %d\n", sum);
    printf("Name: Siddh Jain\n");

    return 0;
}