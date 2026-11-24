// implementazione dell'ADT Frazione

#include <stdio.h>
#include <stdlib.h>

#include "frazione.h"

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

Frazione frazione(int n, int d) { // costruttore
  Frazione f;
  if (d == 0) {
    printf("Divisione per 0\n");
    exit(1);
  }
  if (n == 0) {
    f.numeratore = 0;
    f.denominatore = 1;
    return f;
  }
  int m = mcd(n, d);
  f.numeratore = n / m;
  f.denominatore = d / m;
  return f;
}

int num(Frazione f) { return f.numeratore; } // "getter"

int den(Frazione f) { return f.denominatore; } // "getter"

Frazione leggiFrazione() {
  int n, d;
  scanf("%d%d", &n, &d);
  return frazione(n, d);
}

void stampaFrazionaria(Frazione f) {
  printf("%d", num(f));
  if (den(f) != 1)
    printf("/%d", den(f));
}

float decimale(Frazione f) { return (float)num(f) / den(f); }

void stampaDecimale(Frazione f) { printf("%f", decimale(f)); }

Frazione opposto(Frazione f) { return frazione(-num(f), den(f)); }

Frazione inverso(Frazione f) { return frazione(den(f), num(f)); }

Frazione somma(Frazione f1, Frazione f2) {
  return frazione(num(f1) * den(f2) + num(f2) * den(f1), den(f1) * den(f2));
}

Frazione differenza(Frazione f1, Frazione f2) { return somma(f1, opposto(f2)); }

Frazione prodotto(Frazione f1, Frazione f2) {
  return frazione(num(f1) * num(f2), den(f1) * den(f2));
}

Frazione quoziente(Frazione f1, Frazione f2) {
  return prodotto(f1, inverso(f2));
}
