#include <stdio.h>

int main() {
    /* Write a program that checks if a
     * given year is a leap year using if-else statement.
     */
    
    int year;

    printf("What year is it?\n");
    scanf("%d", &year);

    if (year%4 == 0) {
        printf("It is a leap year\n");
    } else {
        printf("It is not a leap year\n");
    }
    return 0;
}
