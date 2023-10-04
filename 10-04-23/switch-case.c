#include <stdio.h>

int main() {

    int day;

    printf("Give a number based on the day today\n");
    scanf("%d", &day);

    switch(day){
        case 1:
            printf("It's Sunday\n");
        break;
        case 2:
            printf("It's Monday\n");
        break;
        case 3:
            printf("It's Tuesday\n");
        break;
        case 4:
            printf("It's Wednesday\n");
        break;
        case 5:
            printf("It's Thursday\n");
        break;
        case 6:
            printf("It's Friday\n");
        break;
        case 7:
            printf("It's Saturday\n");
        break;
        default:
            printf("There's only 7 days in a week!\n");
    }
    return 0;
}
