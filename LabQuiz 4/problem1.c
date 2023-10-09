#include <stdio.h>

int main() {

    int choice;
    printf("What would you like to do?\n");
    printf("\n 1: Add Data\n 2: Retrieve Data\n 3: Delete Data\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You have successfully added a new data\n");
            break;
        case 2:
            printf("You have successfully retrieved the data\n");
            break;
        case 3:
            printf("You have successfully deleted the data\n");
            break;
        default:
            printf("Please select an option\n");
    }

    return 0;
}
