#include <stdio.h>

int main() {
  // definizione variabili
  int G1, M1, A1;        // input
  int G2, M2, A2;        // input
  int N0_1, N1_1, N2_1, N3_1; // valori intermedi
  int N0_2, N1_2, N2_2, N3_2; // valori intermedi
  int JD1;             // output
  int JD2;             // output
                      // input
  printf("Inserisci giorno, mese e anno della prima data\n");
  scanf("%d", &G1);
  scanf("%d", &M1);
  scanf("%d", &A1);

  // calcolo valori intermedi
  N0_1 = (M1 - 14) / 12;
  N1_1 = 1461 * (A1 + 4800 + N0_1) / 4;
  N2_1 = 367 * (M1 - 2 - 12 * N0_1) / 12;
  N3_1 = 3 * (A1 + 4900 + N0_1) / 400;

  // calcolo valore finale
  JD1 = N1_1 + N2_1 - N3_1 + G1 - 32075;
  // output

  printf("Inserisci giorno, mese e anno della seconda data\n");
  scanf("%d", &G2);
  scanf("%d", &M2);
  scanf("%d", &A2);

  // calcolo valori intermedi
  N0_2 = (M2 - 14) / 12;
  N1_2 = 1461 * (A2 + 4800 + N0_2) / 4;
  N2_2 = 367 * (M2 - 2 - 12 * N0_2) / 12;
  N3_2 = 3 * (A2 + 4900 + N0_2) / 400;

  // calcolo valore finale
  JD2 = N1_2 + N2_2 - N3_2 + G2 - 32075;

  printf("il numero di giorni trascorsi %d\n", JD2 - JD1);
}