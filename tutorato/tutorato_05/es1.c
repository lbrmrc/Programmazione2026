#include <stdio.h>

int moltiplica(int a, int b, int *ps) {
  int i, j;
  *ps = 0;
  for (i = 0; i < a; i++)
    for (j = 0; j < b; j++)
      (*ps)++;

}

int main() {
  int M, N, s, i, p;
  scanf("%d%d", &M, &N);
  s = 0;
  for (i = 1; i <= N; i++) {
    moltiplica(M, i, &p);
    s = s + p;
  }
  printf("%.2f", (float)s / N);
  return 0;
}