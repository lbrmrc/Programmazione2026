#include <stdio.h>
#define DIM 5

void insertion_sort(int a[], int dl){
  int dlo;
  for (dlo = 0; dlo < dl; dlo++) {
    int j = dlo, m = a[dlo];
    while (j > 0 && m < a[j - 1]) {
      a[j] = a[j - 1];
      j--;
    }
    a[j] = m;
  }
}

int main(void) {
  int a[] = {4, 1, 8, 0, 5}, i ;

  insertion_sort(a,5);

  for (i = 0; i < DIM; i++)
    printf("%d ", a[i]);
  printf("\n");
}