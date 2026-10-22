#include <stdio.h>

int main() {
  int i;

  for (i = 1; i <= 5; i++) {
    // i itera [1..5] = S1
    // 2 * i itera map(doppio, S1) = [2, 4, 6, 8, 10];
    printf("%d\n", 2 * i);
  }
}