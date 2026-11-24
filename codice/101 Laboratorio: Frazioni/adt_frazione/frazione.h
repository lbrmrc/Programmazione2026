// dichiarazione ADT Frazione

typedef struct {
  int numeratore;
  int denominatore;
} Frazione;

Frazione frazione(int n, int d);
int num(Frazione f);
int den(Frazione f);
Frazione leggiFrazione();
void stampaFrazionaria(Frazione f);
float decimale(Frazione f);
void stampaDecimale(Frazione f);
Frazione opposto(Frazione f);
Frazione inverso(Frazione f);
Frazione somma(Frazione f1, Frazione f2);
Frazione differenza(Frazione f1, Frazione f2);
Frazione prodotto(Frazione f1, Frazione f2);
Frazione quoziente(Frazione f1, Frazione f2);