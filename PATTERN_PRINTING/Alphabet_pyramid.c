#include <stdio.h>
int main() {
    int rows = 3;

    for (int i = 1; i <= rows; i++) {
        char letter = 'A' + (i - 1);
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%c ", letter);
        }
        printf("\n");
    }

    return 0;
}
