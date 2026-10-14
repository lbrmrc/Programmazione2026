#include <stdio.h>

int valore_assoluto(int n) {
  return n >= 0 ? n : -n;
}

int main() {
  printf("%d %d\n", -5, valore_assoluto(-5));
  printf("%d %d\n", 0, valore_assoluto(0));
  printf("%d %d\n", 3, valore_assoluto(3));
}
