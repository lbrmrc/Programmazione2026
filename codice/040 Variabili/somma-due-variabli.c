#include <stdio.h>

int main() {
  int addendo; // variabile di input
  int somma_parziale; // accumulatore
  printf("Inserisci tre numeri interi\n");
  somma_parziale = 0;
  scanf("%d", &addendo); // input
  somma_parziale += addendo; // aggiornamento dell'accumulatore
  scanf("%d", &addendo); // input
  somma_parziale += addendo;
  scanf("%d", &addendo); // input
  somma_parziale += addendo;
  printf("La somma è %d\n", somma_parziale); // output
}