#include <stdio.h>
#include <stdlib.h>

int main() {
  char s[] = "Ferrara";
  int cap = 44121;
  FILE *pf;

  // 1. apertura in scrittura

  pf = fopen("citta.txt", "wt");
  if (pf == NULL){
    printf("Errore apertura\n");
    exit(1);
  }

  // 2. scrittura

  fprintf(pf, "%s", s);
  fprintf(pf, "\n");
  fprintf(pf, "%d", cap);

  // 3. chiusura
  if (fclose(pf) != 0){
    printf("Errore chiusura\n");
    exit(2);
  }
 }