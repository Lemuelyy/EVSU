#include <stdio.h>

int main() {

    int week_number;
    printf("What week number? ");
    scanf("%d", &week_number);

    switch (week_number) {
        case 1:
            printf("Week number %d is Sunday\n", week_number);
            break;
        case 2:
            printf("Week number %d is Monday\n", week_number);
            break;
        case 3:
            printf("Week number %d is Tuesday\n", week_number);
            break;
        case 4:
            printf("Week number %d is Wednesday\n", week_number);
            break;
        case 5:
            printf("Week number %d is Thursday\n", week_number);
            break;
        case 6:
            printf("Week number %d is Friday\n", week_number);
            break;
        case 7:
            printf("Week number %d is Saturday\n", week_number);
            break;
        default:
            printf("Not a valid week number\n");

            return 0;
    }
}
