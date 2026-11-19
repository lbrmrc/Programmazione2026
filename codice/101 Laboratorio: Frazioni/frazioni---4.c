#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int numeratore;
  int denominatore;
} Frazione;

int mcd(int a, int b) { // algoritmo di Euclide
  if (a == 0 || b == 0)
    return 1;
  if (a < 0)
    a = -a;
  if (b < 0)
    b = -b;
  while (a != b)
    if (a < b)
      b = b - a;
    else
      a = a - b;
  return a;
}

void frazione(Frazione *pf, int n, int d) { // costruttore
  if (d == 0) {
    printf("Divisione per 0\n");
    exit(1);
  }
  if (n == 0) {
    pf->numeratore = 0;
    pf->denominatore = 1;
  }
  int m = mcd(n, d);
  pf->numeratore = n / m;
  pf->denominatore = d / m;
}

int num(Frazione *pf) { return pf->numeratore; } // "getter"

int den(Frazione *pf) { return pf->denominatore; } // "getter"

// Frazione leggiFrazione() {
//   int n, d;
//   scanf("%d%d", &n, &d);
//   return frazione(n, d);
// }

// void stampaFrazionaria(Frazione f) {
//   printf("%d", num(f));
//   if (den(f) != 1)
//     printf("/%d", den(f));
// }

// float decimale(Frazione f) { return (float)num(f) / den(f); }

// void stampaDecimale(Frazione f) { printf("%f", decimale(f)); }

// Frazione opposto(Frazione f) { return frazione(-num(f), den(f)); }

// Frazione inverso(Frazione f) { return frazione(den(f), num(f)); }

void somma(Frazione *pfr, Frazione *pf1, Frazione *pf2) {
  
    frazione(pfr, num(pf1) * den(pf2) + num(pf2) * den(pf1), den(pf1) * den(pf2));
}

// Frazione differenza(Frazione f1, Frazione f2) { return somma(f1,
// opposto(f2)); }

// Frazione prodotto(Frazione f1, Frazione f2) {
//   return frazione(num(f1) * num(f2), den(f1) * den(f2));
// }

// Frazione quoziente(Frazione f1, Frazione f2) {
//   return prodotto(f1, inverso(f2));
// }

int main() {
  Frazione f1, f2, f3, f4;

  frazione(&f1, 2, 4);
  frazione(&f2, 4, 5);
  somma(&f3, &f1, &f2);

  //   stampaFrazionaria(f3); // stampare 4/5
  //   printf("\n");
  //   f4 = opposto(f3);
  //   stampaFrazionaria(f4);
  //   printf("\n");
  //   stampaFrazionaria(differenza(f1, f2));
  //   printf("\n");
  //   stampaFrazionaria(prodotto(f1, f2));
  //   printf("\n");
  //   stampaFrazionaria(inverso(f2));
  //   printf("\n");
  //   stampaFrazionaria(quoziente(f1, f2));
  //   printf("\n");

  // //   stampaFrazionaria(quoziente(f1, frazione(0, 3)));
  // //   printf("\n");

  //   stampaFrazionaria(differenza(f1,f1));
  //   printf("\n");

  return 0;
}