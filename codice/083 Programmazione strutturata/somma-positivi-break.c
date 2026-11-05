#include <stdio.h>

int main() {
  int i, n, s;
  printf("Inserisci 5 numeri interi\n");
  s = 0;
  for (i = 0; i < 5; i++) {
    scanf("%d", &n);
    if (n <= 0)
      continue;
    s = s + n;
  }
  printf("%d\n", s);
}