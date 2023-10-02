#include <stdio.h>

int main() {
    /* Write a program that takes three numbers
     * as input and finds the largest among 
     * them using else-if statement.
     */

    int num1, num2, num3;

    printf("first number = ");
    scanf("%d", &num1);

    printf("second number = ");
    scanf("%d", &num2);

    printf("third number = ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("first number is the largest\n");
    } else if (num2 >= num1 && num2 >= num3) {
        printf("second number is the largest\n");
    } else 
        printf("third number is the largest\n");
    return 0;
}
