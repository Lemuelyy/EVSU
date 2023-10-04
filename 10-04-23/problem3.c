#include <stdio.h>

int main() {

    int grade;
    
    printf("What's your grade?\n");
    scanf("%d", &grade);

    if (grade >= 90) {
        printf("Your grade is A!\n");
    } else if (grade >= 80) {
        printf("your grade is B!\n");
    } else if (grade >= 70) {
        printf("Your grade is C!\n");
    } else if (grade >= 60) {
        printf("Your grade is D!\n");
    } else if (grade < 50) {
        printf("Your grade is F!\n");
    }
    return 0;
}
