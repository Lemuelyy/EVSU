#include <stdio.h>

int main() {
    
    int num1, num2;
    char operator;
    
    printf("Choose the operation you want to use:\n");
    printf("'+' = addition\n");
    printf("'-' = subtraction\n");
    printf("'*' = multiplication\n");
    printf("'/' = division\n");
    scanf("%s", &operator);

    printf("First Number: ");
    scanf("%d", &num1);

    printf("Second Number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            printf("The sum is %d\n", num1 + num2);
            break;
        case '-':
            printf("The difference is %d\n", num1 - num2);
            break;
        case '*':
            printf("The product is %d\n", num1 * num2);
            break;
        case '/':
            printf("The quotient is %d\n", num1 / num2);
            break;
    }
    return 0;
}
