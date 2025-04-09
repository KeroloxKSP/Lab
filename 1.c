#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Introduceti primul numar: ");
    scanf("%f", &num1);
    printf("Introduceti al doilea numar: ");
    scanf("%f", &num2);
    printf("Introduceti operatorul (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Rezultat: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Rezultat: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Rezultat: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Rezultat: %.2f\n", result);
            } else {
                printf("Eroare. Impartire la zero.\n");
            }
            break;
        default:
            printf("Operator invalid!\n");
    }

    return 0;
}
