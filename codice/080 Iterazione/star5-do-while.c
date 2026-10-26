#include <stdio.h>

int main() {
  int i; // variabile contatore delle stampe
  i = 0;
  do
  // inizio corpo del ciclo
  {
    printf("*\n");
    i++;
  }
  // i è sempre uguale al numero di asterischi stampati
  // fine corpo del ciclo
  while (i < 5); // ho stampato meno di 5 asterischi

  printf("\n");
}