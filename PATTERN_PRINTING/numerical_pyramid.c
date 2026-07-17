#include <stdio.h>
int main() {
    int rows = 3;
    int count = 1;
 for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d", count);
            count++; 
        }
        printf("\n");
    }
    return 0;
}
