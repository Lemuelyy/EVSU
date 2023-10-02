#include <stdio.h>

int main() {
    /* Write a program that takes a student's score as
     * input and prints their corresponding grade based on the
     * following grading scale using else-if statement.
     * 90 or above: A
     * 80-89: B
     * 70-79: C
     * 60-69: D
     * Below 60: F
     */
    int grade;

    printf("What's your grade?\n");
    scanf("%d", &grade);

    if (grade >= 90) {
        printf("A\n");
    } else if (grade >= 80) {
        printf("B\n");
    } else if (grade >= 70) {
        printf("C\n");
    } else if (grade >= 60) {
        printf("D\n");
    } else 
        printf("F\n");

    return 0;
}
