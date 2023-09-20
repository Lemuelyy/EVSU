#include <stdio.h>

int main() {

    // Celsius to Fahrenheit converter
    float Fahrenheit, Celsius;

    // Asks for the temperature in Celsius
    printf("Celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 9/5) + 32;

    printf("The temperature in Fahrenheit is %f\n", Fahrenheit);
    return 0;
}
