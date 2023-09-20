#include <stdio.h>

int main() {
    // Calculates the area of a rectangle with the given length and width
    float length, width, area;
    
    // Asks for length and width
    printf("Length = ");
    scanf("%f", &length);

    printf("Width = ");
    scanf("%f", &width);

    // Calculate the area
    area = length * width;

    printf("The area of the rectangle is %f\n", area);

    return 0;
}
