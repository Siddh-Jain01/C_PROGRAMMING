// 47_Check_Leap_Year.c

#include <stdio.h>

int main() {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Name: Siddh jain\n");

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");

    printf("Name: Siddh jain\n");
    return 0;
}