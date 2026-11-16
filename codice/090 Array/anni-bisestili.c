#include <stdio.h>

#define INIZIALE 1700
#define FINALE 2300

int bisestile(int anno) {
  return anno % 400 == 0 || (anno % 4 == 0 && anno % 100 != 0);
}

int main() {
  int a[FINALE-INIZIALE+1];
  int b[FINALE-INIZIALE+1], dlb;
  int i;

  // a = 1900..2100
  for (i = 0; i <= FINALE-INIZIALE; i++)
    a[i] = INIZIALE + i;

  // b = filter(bisestile, a)
  dlb = 0;
  for (i = 0; i <= FINALE-INIZIALE; i++) {
    // a[i] itera a
    if (bisestile(a[i])) {
      // a[i] itera filter(bisestile,a)
      b[dlb] = a[i];
      dlb++;
    }
  }
  for (i = 0; i < dlb; i++)
    printf("%d ", b[i]);
  printf("\n");
}