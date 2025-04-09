#include <stdio.h>

int main() {
    float usd, conversie;
    int valuta;

    printf("Introduceti suma in USD: ");
    scanf("%f", &usd);

    printf("Alegeti valuta pentru conversie:\n");
    printf("1. EUR (1 USD = 0.85 EUR)\n");
    printf("2. GBP (1 USD = 0.75 GBP)\n");
    printf("3. JPY (1 USD = 110 JPY)\n");

    scanf("%d", &valuta);

    switch (valuta) {
        case 1:
            conversie = usd * 0.85;
            printf("%.2f USD inseamna %.2f EUR\n", usd, conversie);
            break;
        case 2:
            conversie = usd * 0.75;
            printf("%.2f USD inseamna %.2f GBP\n", usd, conversie);
            break;
        case 3:
            conversie = usd * 110;
            printf("%.2f USD inseamna %.2f JPY\n", usd, conversie);
            break;
        default:
            printf("Selectie valutara invalida!\n");
    }

    return 0;
}
