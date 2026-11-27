#include <stdio.h>
#include <stdlib.h>

#define DIM 50

int main() {
  FILE *pf;
  int age;
  double altezze[DIM];
  int dl;

  pf = fopen("dati.bin", "rb");
  if (pf == NULL) {
    printf("Errore apertura\n");
    exit(1);
  }

  fread(&age, sizeof(int), 1, pf);
  dl = fread(altezze, sizeof(double), DIM, pf);

  if (fclose(pf) != 0) {
    printf("Errore chiusura\n");
    exit(2);
  }
}