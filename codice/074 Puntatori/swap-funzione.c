#include <stdio.h>

void swap(int a, int b) {
  int t;
  t = b;
  b = a;
  a = t; // vecchio valore di b
}

int main() {
  int a = 2, b = 3;

  swap(a, b);

  printf("%d %d\n", a, b);
}