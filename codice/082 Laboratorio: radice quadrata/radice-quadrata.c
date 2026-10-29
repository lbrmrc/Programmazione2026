#include <stdio.h>

float va(float x) {
  if (x < 0)
    return -x;
  else
    return x;
}

float media(float p, float q) { return (p + q) / 2.0; }

float radq(float b) {
  float x;
  x = 1.0;
  while (va((x * x - b) / b) > 1e-6) {
    x = media(x, b / x);
  }
  return x;
}

int main() {
  float a;

  printf("Inserisci un numero\n");
  scanf("%f", &a);

  printf("%f\n", radq(a));
}