#include <stdio.h>

int main() {
    /* Write a program that takes an integer as 
     * input and determines whether it's an odd or even number
     * using else if statement.
     */

    int num;

    printf("What's your number?\n");
    scanf("%d", &num);

    if (num%2 == 0) {
        printf("%d is an even number\n", num);
    } else {
        printf("%d is an odd number\n", num);
    }
    return 0;
}
