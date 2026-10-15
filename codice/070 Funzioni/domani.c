#include <stdio.h>

int bisestile(int A) // vale 1 se A è bisestile, altrimenti 0
{
  return A % 400 == 0 || (A % 4 == 0 && A % 100 != 0);
}

int giorni_del_mese(int m, int a) {
  if (m == 4 || m == 6 || m == 9 || m == 11)
    return 30;
  else if (m == 2)
    if (bisestile(a))
      return 29;
    else
      return 28;
  else
    return 31;
}

int valida(int giorno, int mese, int anno) {
  if (mese < 1 || mese > 12)
    return 0;
  if (giorno < 1 || giorno > giorni_del_mese(mese, anno))
    return 0;
  return 1;
}

int main(void) {
  int G, M, A;

  scanf("%d%d%d", &G, &M, &A);

  if (!valida(G, M, A)) {
    printf("Data non valida\n");
    return 1;
  }

  if (G == 31 && M == 12)
    printf("%d %d %d\n", 1, 1, A + 1);
  else if (G == giorni_del_mese(M, A)) // ultimo giorno del mese
    printf("%d %d %d\n", 1, M + 1, A);
  else
    printf("%d %d %d\n", G + 1, M, A);
  return 0;
}