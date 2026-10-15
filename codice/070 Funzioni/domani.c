#include <stdio.h>

int bisestile(int A) // vale 1 se A è bisestile, altrimenti 0
{
  return A % 400 == 0 || (A % 4 == 0 && A % 100 != 0);
}

int giorni_del_mese(int M, int A) {
  int gm;
  if (M == 4 || M == 6 || M == 9 || M == 11)
    gm = 30;
  else if (M == 2)
    if (bisestile(A))
      gm = 29;
    else
      gm = 28;
  else
    gm = 31;
  return gm;
}

int main(void) {
  int G, M, A;

  scanf("%d%d%d", &G, &M, &A);

  if (G == 31 && M == 12)
    printf("%d %d %d\n", 1, 1, A + 1);
  else if (G == giorni_del_mese(M, A)) // ultimo giorno del mese
    printf("%d %d %d\n", 1, M + 1, A);
  else
    printf("%d %d %d\n", G + 1, M, A);
  return 0;
}