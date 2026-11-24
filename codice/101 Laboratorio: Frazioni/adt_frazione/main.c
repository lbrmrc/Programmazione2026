#include <stdio.h>

#include "frazione.h"

int main() {
  Frazione f1, f2, f3, f4;

  f1 = frazione(2, 4);
  f2 = frazione(4, 5);
  f3 = somma(f1, f2);

  stampaFrazionaria(f3); // stampare 4/5
  printf("\n");
  f4 = opposto(f3);
  stampaFrazionaria(f4);
  printf("\n");
  stampaFrazionaria(differenza(f1, f2));
  printf("\n");
  stampaFrazionaria(prodotto(f1, f2));
  printf("\n");
  stampaFrazionaria(inverso(f2));
  printf("\n");
  stampaFrazionaria(quoziente(f1, f2));
  printf("\n");
  stampaFrazionaria(differenza(f1,f1));
  printf("\n");

  return 0;
}