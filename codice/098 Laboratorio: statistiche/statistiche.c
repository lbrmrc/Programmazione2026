#include <stdio.h>
#define DIM 100

int indice_minimo(int a[], int dl) {
  int m; // accumulatore, indice provvisorio del minimo
  int i;
  m = 0; // inizializzazione accumulatore
  for (i = 1; i < dl; i++)
    if (a[i] < a[m]) // aggiornamento accumulatore
      m = i;
  return m;
}

int indice_massimo(int a[], int dl) {
  int m; // accumulatore, indice provvisorio del minimo
  int i;
  m = 0; // inizializzazione accumulatore
  for (i = 1; i < dl; i++)
    if (a[i] > a[m]) // aggiornamento accumulatore
      m = i;
  return m;
}

int somma(int a[], int dl) {
  int s;
  int i;
  s = 0; // inizializzazione accumulatore;
  for (i = 0; i < dl; i++)
    s = s + a[i]; // aggiornamento accumulatore
  return s;
}

float media_aritmetica(int a[], int dl) { return (float)somma(a, dl) / dl; }

int leggi_input(int a[]) {
  int numero;
  int dl;
  dl = 0;
  do {
    scanf("%d", &numero);
    if (numero < 0) // fine input
      break;
    a[dl] = numero;
    dl++;
  } while (dl < DIM); // nell'array c'è ancora spazio
  return dl;
}

int numeri_frequenze(int a[], int dl, int numeri[], int frequenze[]) {
  int i;
  int j;
  int trovato; // l'elemento di a è stato trovato in numer
  int dln;     // dimensione logica di numeri e frequenze
  dln = 0;
  for (i = 0; i < dl; i++) {
    trovato = 0;
    for (j = 0; j < dln; j++)
      if (a[i] == numeri[j]) {
        frequenze[j]++;
        trovato = 1;
        break;
      }
    if (!trovato) {
      numeri[dln] = a[i];
      frequenze[dln] = 1;
      dln++;
    }
  }
  return dln;
}

int main() {
  int a[DIM], dl;
  int numeri[DIM], frequenze[DIM], dln;
  int frequenza_massima;
  int i;

  dl = leggi_input(a);

  // stampa del minimo
  printf("Minimo: %d\n", a[indice_minimo(a, dl)]);
  printf("Massimo: %d\n", a[indice_massimo(a, dl)]);
  printf("Media aritmetica: %.2f\n", media_aritmetica(a, dl));

  printf("Compaiono %d volte:\n", frequenza_massima);
  dln = numeri_frequenze(a, dl, numeri, frequenze);
  frequenza_massima = frequenze[indice_massimo(frequenze, dln)];
  printf("Compaiono %d volte:\n", frequenza_massima);
  for (i = 0; i < dln; i++)
    if (frequenze[i] == frequenza_massima)
      printf("%d\n", numeri[i]);
  return 0;
}