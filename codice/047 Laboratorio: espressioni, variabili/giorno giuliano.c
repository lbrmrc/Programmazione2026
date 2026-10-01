#include <stdio.h>

int main() {
  // definizione variabili
  int G, M, A;        // input
  int N0, N1, N2, N3; // valori intermedi
  int JD;             // output
                      // input
  printf("Inserisci giorno, mese e anno di una data\n");
  scanf("%d", &G);
  scanf("%d", &M);
  scanf("%d", &A);

  // calcolo valori intermedi
  N0 = (M - 14) / 12;
  N1 = 1461 * (A + 4800 + N0) / 4;
  N2 = 367 * (M - 2 - 12 * N0) / 12;
  N3 = 3 * (A + 4900 + N0) / 400;

  // calcolo valore finale
  JD = N1 + N2 - N3 + G - 32075;
  // output
  printf("Il giorno giuliano è %d\n", JD);
}