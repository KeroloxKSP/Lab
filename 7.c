#include <stdio.h>

int main() {
    int age;

    printf("Introduceti varsta dvs.: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Vârstă invalidă!\n");
        return -1; 
    }

    switch (age / 10) { 
        case 0:
        case 1:
           if(age<=12)
              {printf ("Pret :5$");break;}
case
