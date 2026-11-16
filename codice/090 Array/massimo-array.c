#include <stdio.h>

int main() {
  int a[5] = {4, 1, 0, 8, 7};
  int m; // accumulatore
  int i; // indice

  m = a[0]; // inizializzazione accumulatore
  for (i = 1; i < 5; i++)
    m = a[i] > m ? a[i] : m;
  printf("Massimo: %d\n", m);
}