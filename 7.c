#include <stdio.h>

int main() {
    int varsta;
    printf("Introduceti varsta: ");
    scanf("%d", &varsta);

    if (varsta < 0) {
        printf("Varsta invalida!\n");
    } else if (varsta <= 12) {
        printf("Pret bilet: 5$\n");
    } else if (varsta <= 17) {
        printf("Pret bilet: 8$\n");
    } else if (varsta <= 59) {
        printf("Pret bilet: 12$\n");
    } else {
        printf("Pret bilet: 7$\n");
    }

    return 0;
}
