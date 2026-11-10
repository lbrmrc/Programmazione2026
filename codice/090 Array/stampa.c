#include <stdio.h>
#define DIM 5

int main() {
  int a[DIM] = {2, 4, 7, 5, 1};
  int i;
  for (i = 0; i < DIM; i++)
    printf("%d\n", a[i]);
}