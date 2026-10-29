#include <stdio.h>

float va(float x) {
  if (x < 0)
    return -x;
  else
    return x;
}

float media(float p, float q) { return (p + q) / 2.0; }

int main() {
  float a;
  float x;
  printf("Inserisci un numero\n");
  scanf("%f", &a);
  x = 1.0;
  while (va((x * x - a) / a) > 1e-6) {
    x = media(x, a / x);
  }
  printf("%f\n", x);
}