#include <stdio.h>

int main() {
  int i;
  int c;
  int a;
  a = 1;
  c = 0;
  for (i = 10; i >= 1 && c < 5; i--) {
    // i itera take(5, 10..1)
    a = a * i;
    c++;
  }
  // a vale 10 * 9 * 8 * 7 * 6
  printf("%d\n", a); 
}