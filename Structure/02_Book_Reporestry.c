#include <stdio.h>

// Structure definition
struct Book {
    int id;
    char name[50];
    char type[30];
    int price;
};

int main() {
  
    struct Book b1 = {1, "C Programming", "Education", 250};
    struct Book b2 = {2, "Data Structures", "Education", 300};
    struct Book b3 = {3, "Harry Potter", "Fiction", 500};
    struct Book b4 = {4, "Rich Dad Poor Dad", "Finance", 350};
    struct Book b5 = {5, "Wings of Fire", "Biography", 200};

    printf("Book Repository Details:\n\n");

    printf("Book 1\nID: %d\nName: %s\nType: %s\nPrice: %d\n\n",
           b1.id, b1.name, b1.type, b1.price);

    printf("Book 2\nID: %d\nName: %s\nType: %s\nPrice: %d\n\n",
           b2.id, b2.name, b2.type, b2.price);

    printf("Book 3\nID: %d\nName: %s\nType: %s\nPrice: %d\n\n",
           b3.id, b3.name, b3.type, b3.price);

    printf("Book 4\nID: %d\nName: %s\nType: %s\nPrice: %d\n\n",
           b4.id, b4.name, b4.type, b4.price);

    printf("Book 5\nID: %d\nName: %s\nType: %s\nPrice: %d\n\n",
           b5.id, b5.name, b5.type, b5.price);

    return 0;
}