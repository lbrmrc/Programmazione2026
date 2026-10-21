#include <stdio.h>

int main() {
  int numero;

richiesta:
  // inizio corpo
  printf("Inserisci numero\n");
  scanf("%d", &numero);
  // fine corpo
  if (numero >= 0) // condizione di permanenza
  {
    printf("%d\n", numero * 2);
    goto richiesta;
  }
}