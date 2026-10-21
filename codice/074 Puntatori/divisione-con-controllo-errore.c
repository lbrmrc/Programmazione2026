#include <stdio.h>

// 0 tutto ok
// 1 divisione per 0
// 2 dividendo > 100
int divisione(int dividendo, int divisore, int *pq, int *pr) {
  if (divisore == 0)
    return 1;
  if (dividendo > 100)
    return 2;

  *pq = dividendo / divisore;
  *pr = dividendo % divisore;
  return 0; // tutto ok
}

int main() {
  int quoziente, resto, dividendo, divisore;
  scanf("%d%d", &dividendo, &divisore);
  switch (divisione(dividendo, divisore, &quoziente, &resto)) {
  case 0:
    printf("Quoz.: %d Resto: %d\n", quoziente, resto);
    return 0;
  case 1:
    printf("Divisione per 0\n");
    return 1;
  case 2:
    printf("Dividendo > 100\n");
    return 2;
  }
}