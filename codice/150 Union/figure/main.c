#include <stdio.h>

#include "figura.h"

int main() {
  Figura f;
  f = quadrato(2.7);
  printf("Area: %f, Perimetro: %f\n", area(f), perimetro(f));

  f = rettangolo(1.4, 2.5);
  printf("Area: %f, Perimetro: %f\n", area(f), perimetro(f));

  return 0;
}