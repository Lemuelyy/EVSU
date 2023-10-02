#include <stdio.h>

int main() {
    /* Write a program that checks if a 
     * number is divisible by another 
     * number using if-else statement.
     */

    int num1;
    int num2;
    
    printf("What's your number?\n");
    scanf("%d", &num1);

    printf("What's the another number?\n");
    scanf("%d", &num2);

    if (num1%num2 == 0) {
        printf("Your number is divisible by the another number\n");
    } else {
        printf("Your number is NOT divisible by the another number\n");
    }
    return 0;
}
