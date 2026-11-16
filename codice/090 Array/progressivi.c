#include <stdio.h>

int main() {
  int a[5];
  int num, i;
  scanf("%d", &num);
  for (i = 0; i < 5; i++) {
    // i itera 0..4
    // a[i] itera a
    // num + i + 1 itera num + 0 + 1, num + 1 + 1, num + 2 + 1, num + 3 + 1, num + 4 + 1
    a[i] = num + i + 1;
  }
""  for (i = 0; i < 5; i++) {
    printf("%d\n", a[i]);
  }
}