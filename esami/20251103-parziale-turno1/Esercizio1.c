#include <stdio.h>

float va(float y) { return y < 0 ? -y : y; }

float rad2(float a) {
  float x;
  float d;
  d = 1.0;
  while (100 * d * d < a)
    d = 10 * d;
  x = d;
  while (va(x * x - a) / a > 1e-6) {
    while ((x + d) * (x + d) < a)
      x = x + d;
    d = d / 10;
  }
  return x;
}

int main() {
  int M;
  int k;
  int r;
  printf("Inserisci un intero positivo\n");
  scanf("%d", &M);
  for (k = 1; k <= M; k++) {
    // k itera 1..M
    // rad2(k) itera map(rad2, 1..M);
    printf("%f\n", rad2(k));
  }
  return 0;
}