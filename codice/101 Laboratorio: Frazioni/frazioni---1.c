#include <stdio.h>

typedef struct {
  int numeratore;
  int denominatore;
} Frazione;

Frazione frazione(int n, int d) {
  Frazione f;
  f.numeratore = n;
  f.denominatore = d;
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
    printf("%d/%d", num(f), den(f)); 
}

float decimale(Frazione f){
    return (float)num(f)/den(f);
}

void stampaDecimale(Frazione f){
    printf("%f", decimale(f));
}

int main() {
  Frazione f1, f2;

  f1 = leggiFrazione();
  f2 = frazione(4, 5);

  stampaFrazionaria(f2); // stampare 4/5
  printf("\n");

  return 0;
}