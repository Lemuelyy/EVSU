#include <stdio.h>

int main() {
    
    int num1, num2;
    char operator;
    float quotient;

    printf("Choose the operation you want to use:\n");
    printf("\t'+' = addition\n");
    printf("\t'-' = subtraction\n");
    printf("\t'*' = multiplication\n");
    printf("\t'/' = division\n");
    printf("Chosen: ");
    scanf("%s", &operator);

    printf("First Number: ");
    scanf("%d", &num1);

    printf("Second Number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            printf("The sum of %d and %d is %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("The difference of %d and %d is %d\n",num1, num2, num1 - num2);
            break;
        case '*':
            printf("The product of %d and %d is %d\n",num1, num2, num1 * num2);
            break;
        case '/':
            quotient = (float)num1/num2;
            printf("The quotient of %d and %d is %.1f\n", num1, num2, quotient);
            break;
    }
    return 0;
}

