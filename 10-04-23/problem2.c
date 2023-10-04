#include <stdio.h>

int main() {

    int given_number;

    printf("What is your number?\n");
    scanf("%d", &given_number);

    if(given_number > 0){
        printf("Pastib brad!!\n");
    } else if (given_number < 0) {
        printf("Negatib brad!!\n");
    } else {
        printf("Ano ito brad zero man\n");
    }

    return 0;
}
