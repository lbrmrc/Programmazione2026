#include <stdio.h>

int main() {
  int mese, anno;
  int giorni_del_mese;
  int bisestile; // variabile logica
  printf("Inserisci mese e anno\n");
  scanf("%d%d", &mese, &anno);
  bisestile = (anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0);
  if (mese == 2)
    giorni_del_mese = bisestile ? 29 : 28; 
  else if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
    giorni_del_mese = 30;
  else
    giorni_del_mese = 31;
  printf("%d\n", giorni_del_mese);
}