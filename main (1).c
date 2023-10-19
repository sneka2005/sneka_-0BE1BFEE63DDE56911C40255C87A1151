#include <stdio.h>

int main() {
    int year;

    // Prompt user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if it's a leap year using if-else statements
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

