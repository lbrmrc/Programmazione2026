#include <stdio.h>

void potenza(int b, int e, int *punt_p) {
  int f, q, a;
  *punt_p = 1;
  for (f = 1; f <= e; f++) {
    q = 0;
    for (a = 1; a <= b; a++)
      q = q + *punt_p;
    *punt_p = q;
  }
}

int main() {
  int k, M, N;
  int acc;
  int p;
  printf("Inserisci due interi positivi\n");
  scanf("%d%d", &M, &N);
  acc = 0;
  for (k = 0; k <= N; k++) {
    // k itera [0..N]
    potenza(M, k, &p);
    // p itera S1
    acc = acc + p;
  }
  // acc contiene la somma degli elementi di S1
  printf("%d\n", acc);
  return 0;
}