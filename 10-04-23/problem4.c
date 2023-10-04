#include <stdio.h>

int main() {

    int num1, num2, num3, num4;

    printf("First Number = ");
    scanf("%d", &num1);
    printf("Second Number = ");
    scanf("%d", &num2);
    printf("Third Number = ");
    scanf("%d", &num3);
    printf("Fourth Number = ");
    scanf("%d", &num4);
    
    if (num1 >= num2) {
        if (num1 >= num3) {
            if (num1 >= num4) {
                printf("%d is the largest\n", num1);
            }
        }
    } else if (num2 >= num1) {
        if (num2 >= num3) {
            if(num2 >= num4) {
                printf("%d is the largest\n", num2);
            }
        }
    } else if (num3 >= num1) {
        if (num3 >= num2) {
            if (num3 >= num4) {
                printf("%d is the largest\n", num3);
            }
        }
    } else {
        printf("%d is the largest\n", num4);
    }
    return 0;
}
