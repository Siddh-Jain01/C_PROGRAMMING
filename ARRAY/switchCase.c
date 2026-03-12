#include <stdio.h>

int main() {
    int choice;
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chossing option 1\n");
            break;
        case 2:
            printf("You chossing option 2\n");
            break;
        case 3:
            printf("You chossing option 3\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


