#include <stdio.h>

int main() {
  int nr_luna;

  printf("Introduceti un numar intre 1 si 12: ");
  scanf("%d", &nr_luna);

  switch (nr_luna) {
    case 1:
      printf("Ianuarie\n");
      break;
    case 2:
      printf("Februarie\n");
      break;
    case 3:
      printf("Martie\n");
      break;
    case 4:
      printf("Aprilie\n");
      break;
    case 5:
      printf("Mai\n");
      break;
    case 6:
      printf("Iunie\n");
      break;
    case 7:
      printf("Iulie\n");
      break;
    case 8:
      printf("August\n");
      break;
    case 9:
      printf("Septembrie\n");
      break;
    case 10:
      printf("Octombrie\n");
      break;
    case 11:
      printf("Noiembrie\n");
      break;
    case 12:
      printf("Decembrie\n");
      break;
    case 0:
      printf("Nu exista luna cu numarul 0.\n");
      break;
    default:
      if (nr_luna < 0) {
        printf("Numerele negative nu sunt valide.\n");
      } else {
        printf("Numar de luna invalid.\n");
      }
  }

  return 0;
}
