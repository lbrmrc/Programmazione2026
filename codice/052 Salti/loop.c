#include <stdio.h>

int main() {
  int a;
  a = 0;
stampa:
  printf("%d\n", a);
  a++;
  if (a < 100)
    goto stampa; // salto condizionato
}