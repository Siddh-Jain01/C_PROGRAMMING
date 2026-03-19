// 43_Sum_Of_N_Numbers.c

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += i;

    printf("Name: Siddh jain\n");
    printf("Sum = %d\n", sum);
    printf("Name: Siddh jain\n");

    return 0;
}