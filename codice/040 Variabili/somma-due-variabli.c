#include <stdio.h>

int main() {
  int addendo; // variabile di input
  int somma_parziale; // accumulatore
  
  printf("Inserisci tre numeri interi\n");
  
  scanf("%d", &somma_parziale); // input primo valore accumulatore
  scanf("%d", &addendo); // input
  somma_parziale += addendo;  // aggiornamento dell'accumulatore
  scanf("%d", &addendo); // input
  somma_parziale += addendo;  // aggiornamento dell'accumulatore
  printf("La somma è %d\n", somma_parziale); // output
}