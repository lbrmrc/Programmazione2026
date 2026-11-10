#include <stdio.h>

int bisestile(int anno) {
  return anno % 400 == 0 || (anno % 4 == 0 && anno % 100 != 0);
}

int main() {
  int a[201];
  int b[201], dlb;
  int i;

  // a = 1900..2100
  for (i = 0; i <= 200; i++)
    a[i] = 1900 + i;

  // b = filter(bisestile, a)
  dlb = 0;
  for (i = 0; i <= 200; i++) {
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