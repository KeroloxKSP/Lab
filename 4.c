#include <stdio.h>

int main() {
    int choice;

    printf("Meniu:\n");
    printf("1. Burger - 5$\n");
    printf("2. Pizza - 8$\n");
    printf("3. Paste - 6$\n");
    printf("4. Sandvis - 4$\n");

    printf("Introduceti alegerea dvs. (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Ati selectat Burger. Preț: 5$\n");
            break;
        case 2:
            printf("Ati selectat Pizza. Preț: 8$\n");
            break;
        case 3:
            printf("Ai selectat Paste. Preț: 6$\n");
            break;
        case 4:
            printf("Ati selectat Sandvis. Preț: 4$\n");
            break;
        default:
            printf("Selectie invalida!\n");
    }

    return 0;
}
