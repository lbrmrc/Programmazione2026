#include <stdio.h>
#include <stdlib.h>

int main() {
  char nome1[31], nome2[31];
  int eta1, eta2;
  FILE *pf;

  pf = fopen("persona.txt", "rt"); // lettura da testo
  if (pf == NULL)                  // errore di apertura
  {
    printf("Errore apertura file\n");
    exit(1);
  }

  // ...
  fscanf(pf, "%s", nome1);
  fscanf(pf, "%d", &eta1);
  fscanf(pf, "%s%d", nome2, &eta2);

  if (fclose(pf) != 0) // chiusura file
  {
    printf("Errore chiusura file\n");
    exit(2);
  }
  return 0;
}