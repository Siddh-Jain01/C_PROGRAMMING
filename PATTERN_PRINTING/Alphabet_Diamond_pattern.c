#include <stdio.h>
int main() {
    int n = 3;
    for (int i = 1; i <= n; i++) {
        char letter = 'A' + (i - 1);
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%c ", letter);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        char letter = 'A' + (i - 1);
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%c ", letter);
        }
        printf("\n");
    }

    return 0;
}
