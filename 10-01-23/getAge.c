#include <stdio.h>

int main() {

    int age;

    printf("How old are you?\n");
    scanf("%d", &age);

    if (age < 18) {
        printf("You are a minor, get the fuck out bitch!!\n");
    } else {
        printf("Pwede ka na ma priso\n");
    }
    return 0;
}
