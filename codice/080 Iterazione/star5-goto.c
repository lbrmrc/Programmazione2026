#include <stdio.h>

int main() {
  int i; // variabile contatore delle stampe
  i = 0;
scrivi:
  // inizio corpo del ciclo
  printf("*");
  i++;
  // i è sempre uguale al numero di asterischi stampati
  // fine corpo del ciclo
  if (i < 50000) // ho stampato meno di 5 asterischi
    goto scrivi;
  printf("\n");
}