// 26_Reverse_Array.c

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Name: Siddh jain\n");
    printf("Reversed array:\n");

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\nName: Siddh jain\n");

    return 0;
}