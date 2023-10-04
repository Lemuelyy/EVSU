#include <stdio.h>

int main() {
    
    int number_of_sides;

    printf("How many sides?\n");
    scanf("%d", &number_of_sides);

    switch (number_of_sides) {
        case 3:
            printf("Triangle\n");
            break;
        case 4:
            printf("Square\n");
            break;
        case 5:
            printf("Pentagon\n");
            break;
        case 6:
            printf("Hexagon\n");
            break;
        case 7:
            printf("Heptagon\n");
            break;
        case 8:
            printf("Octagon\n");
            break;
        case 9:
            printf("Nonagon\n");
            break;
        case 10:
            printf("Decagon\n");
            break;
        case 11:
            printf("Undecagon\n");
            break;
        default:
            printf("No such shape\n");
    }

    return 0;
}
