#include <stdio.h>
#include <stdlib.h>

int main() {
  int vect[10];
  int may = 0, c = 0;

  for (c = 0; c < 10; c++) {
    printf("ingrese un valor para el vector \n [%d]: ", c);
    scanf("%d", &vect[c]);
  }

  printf("\n El vector es igual a \n");
  for (c = 0; c < 10; c++) {
    printf("%d", vect[c]);
  }
  printf("\n");

  for (c = 0; c < 10; c++) {
    if (vect[c] > may) {
      may = vect[c];
    }
  }

  printf("\n El mayor es %d", may);
  return 0;
}
