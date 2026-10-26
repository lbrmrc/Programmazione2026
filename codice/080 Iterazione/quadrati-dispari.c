#include <stdio.h>

int main() {
  int i;

  for (i = 1; i <= 10; i++) {
    // i itera 1..10 = S1
    if (i % 2 == 1) {
      // i itera filter(dispari, S1) = S2
      // i*i itera map(quadrato, S2) = So
      printf("%d\n", i * i);
    }
  }
}