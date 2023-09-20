#include <stdio.h>
#include <string.h>

int main() {
    char greetings1[] = "Passed, maaram ka kun hino ;)";
    char greetings2[] = "Failed, asus di ka man maaram, ada la atubangan";
    char rightPerson[] = "Ms.Mila";
    char chosenPerson[50];
    int value;

    printf("Who's the most beautiful person on the room?\n");
    scanf("%s",chosenPerson);

    value = strcmp(chosenPerson, rightPerson);
    if(value == 0) {
        printf("%s\n", greetings1);
    } else {
        printf("%s\n", greetings2);
    }
    return 0;
}
