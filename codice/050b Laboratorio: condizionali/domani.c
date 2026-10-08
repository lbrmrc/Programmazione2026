#include <stdio.h>

int main() {
  int giorno, mese, anno;
  printf("Inserisci giorno, mese e anno di una data\n");
  scanf("%d%d%d", &giorno, &mese, &anno);
  if (giorno == 31)
    printf("%d/%d/%d\n", 1, mese + 1, anno);
  else
    printf("%d/%d/%d\n", giorno + 1, mese, anno);
}