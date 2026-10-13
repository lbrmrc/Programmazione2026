#include <stdio.h>

int main() {
  int giorno, mese, anno;
  int giorni_del_mese;
  printf("Inserisci giorno, mese e anno di una data\n");
  scanf("%d%d%d", &giorno, &mese, &anno);
  if (mese == 2)
    if (anno % 400 == 0 || anno % 4 == 0 && anno % 100 != 0)
      giorni_del_mese = 29;
    else
      giorni_del_mese = 28;
  else if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
    giorni_del_mese = 30;
  else
    giorni_del_mese = 31;
  if (giorno == 31 && mese == 12) // ultimo dell'anno
    printf("%d / %d / %d\n", 1, 1, anno + 1);
  else if (giorno == giorni_del_mese) // ultimo del mese
    printf("%d / %d / %d\n", 1, mese + 1, anno);
  else
    printf("%d / %d / %d\n", giorno + 1, mese, anno);
}