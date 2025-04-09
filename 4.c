#include <stdio.h>

int main() {
    int alegere;

    printf("Meniu:\n");
    printf("1. Burger - 5$\n");
    printf("2. Pizza - 8$\n");
    printf("3. Paste - 6$\n");
    printf("4. Sandvis - 4$\n");

    printf("Introduceti alegerea dvs. (1-4): ");
    scanf("%d", &alegere);

    switch (alegere {
        case 1:
            printf("Ati selectat Burger. Pret: 5$\n");
            break;
        case 2:
            printf("Ati selectat Pizza. Pret: 8$\n");
            break;
        case 3:
            printf("Ai selectat Paste. Pret: 6$\n");
            break;
        case 4:
            printf("Ati selectat Sandvis. Pret: 4$\n");
            break;
        default:
            printf("Selectie invalida!\n");
    }

    return 0;
}
