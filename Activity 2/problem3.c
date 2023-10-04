#include <stdio.h>

int main() {
    
    int num;

    printf("Choose your product:\n");
    printf("Enter 1 for egg\n");
    printf("Enter 2 for milk\n");
    printf("Enter 3 for chocolate\n");
    printf("Enter 4 for flour\n");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("An egg costs 12 pesos\n");
            break;
        case 2:
            printf("A jug of milk costs 50 pesos\n");
            break;
        case 3:
            printf("A box of chocolate costs 90 pesos\n");
            break;
        case 4:
            printf("A pack of flour costs 35 pesos\n");
            break;
    }
    return 0;
}
