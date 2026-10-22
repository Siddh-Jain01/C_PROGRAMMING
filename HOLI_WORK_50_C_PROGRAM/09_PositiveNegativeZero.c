// 04_Positive_Negative_Zero.c

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Name: Siddh Jain\n");

    if (n > 0)
        printf("Positive\n");
    else if (n < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    printf("Name: Siddh Jain\n");

    return 0;
}
