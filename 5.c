#include <stdio.h>

int main() {
    char vreme;

    printf("Introduceti conditia meteo (S, R, C, W): ");
    scanf(" %c", &vreme);

    switch (vreme) {
        case 'S':
        case 's':
            printf("Poarta ochelari de soare si hidrateaza-te!\n");
            break;
        case 'R':
        case 'r':
            printf("Ia o umbrela cu tine!\n");
            break;
        case 'C':
        case 'c':
            printf("S-ar putea să ploua, fii pregatit!\n");
            break;
        case 'W':
        case 'w':
            printf("E vant afara, tine-ti bine palaria!\n");
            break;
        default:
            printf("Conditie meteo invalida!\n");
    }

    return 0;
}
