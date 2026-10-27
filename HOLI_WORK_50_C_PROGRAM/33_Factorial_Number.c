// 33_Factorial_Number.c

#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Name: Siddh jain\n");
    printf("Factorial of %d is %lld\n", n, fact);
    printf("Name: Siddh jain\n");

    return 0;
}