#include <stdio.h>
#define DIM 5

int main() {
  int a[DIM];
  int i;
  int p; // accumulatore

  for (i = 0; i < DIM; i++)
    scanf("%d", &a[i]);

  // reduce (*, 1, a)
  p = 1;                      // init accumulatore
  for (i = 0; i < DIM; i++) { // i itera 1..DIM-1, a[i] itera a
    p = p * a[i];             // aggiornamento accumulatore
  }

  for (i = 0; i < DIM - 1; i++)
    printf("%d x ", a[i]);
  printf("%d = ", a[DIM - 1]);
  printf("%d\n", p);
}