#include <stdio.h>

int main() {
    char weather;

    printf("Introduceti conditia meteo (S, R, C, W): ");
    scanf(" %c", &weather);

    switch (weather) {
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
            printf("S-ar putea să plouă, fii pregătit!\n");
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
