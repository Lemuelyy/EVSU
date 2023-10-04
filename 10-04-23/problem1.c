#include <stdio.h>

int main() {

    int num1, num2, num3;

    printf("1st Number = ");
    scanf("%d", &num1);
    printf("2nd Number = ");
    scanf("%d", &num2);
    printf("3rd Number = ");
    scanf("%d", &num3);

    if(num1 >= num2 && num1 >= num3){
        printf("The First Number Is The Largest!!!!\n");
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The Second Number Is The Largest!!!!\n");
    } else {
        printf("The Third Number Is The Largest!!!!\n");
    }

    return 0;
}
