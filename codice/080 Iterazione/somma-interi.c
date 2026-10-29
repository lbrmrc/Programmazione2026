#include <stdio.h>

int main() {
  int n, i, acc;

  printf("Inserisci un numero naturale\n");
  scanf("%d", &n);

  acc = 0; // inizializzazione dell'accumulatore
  // Sn = 1, 2, ..., n
  for (i = 1; i <= n; i++) {
    // i itera Sn
    acc = acc + i; // aggiornamento dell'accumulatore
  }
  // acc contiene 1 + 2 + ... + n
  printf("%d\n", acc);
}