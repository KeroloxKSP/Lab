#include <stdio.h>

int main() {
    char color;

    printf("Introduceti culoarea semaforului: (R, Y, G): ");
    scanf(" %c", &color);

    switch (color) {
        case 'R':
        case 'r':
            printf("Opreste-te!\n");
            break;
        case 'Y':
        case 'y':
            printf("Pregateste-te!\n");
            break;
        case 'G':
        case 'g':
            printf("Mergi!\n");
            break;
        default:
            printf("Semnal de trafic invalid!\n");
    }

    return 0;
}
