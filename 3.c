#include <stdio.h>

int main() {
    int day;

    printf("Introduceti un număr între 1 și 7: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Luni\n");
            break;
        case 2:
            printf("Marti\n");
            break;
        case 3:
            printf("Miercuri\n");
            break;
        case 4:
            printf("Joi\n");
            break;
        case 5:
            printf("Vineri\n");
            break;
        case 6:
            printf("Sambata\n");
            break;
        case 7:
            printf("Duminică\n");
            break;
        default:
            printf("Numar de zi invalid!\n");
    }

    return 0;
}
