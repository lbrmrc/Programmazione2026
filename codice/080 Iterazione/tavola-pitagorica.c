#include <stdio.h>

int main() {
  int i;
  int j;
  int n;
  printf("Lato?\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++)
      printf("%3d ", i * j);
    printf("\n");
  }
}