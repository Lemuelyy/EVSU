#include <stdio.h>

int main() {
    // Strings = %s
    char myName[] = "Allen";
    printf("Your name is %s\n", myName);
    
    // Characters = %c
    char myMiddleInitial = 'D';
    printf("Your middle initial is %c\n", myMiddleInitial);

    // Integers = %d
    int myAge = 15;
    printf("You are %d years old\n", myAge);

    // Floats = %f // Floats are 4 bytes (6 - 7 digits)
    float myAverageGrade = 1.5;
    printf("Your average grade is %f\n", myAverageGrade);

    // Doubles = %lf // Doubles are 8 bytes (15 - 16 digits)
    double pie = 3.141592653;
    printf("The character pie is equals to %lf\n", pie);

    // Boolean = %d
    

    return 0;
}
