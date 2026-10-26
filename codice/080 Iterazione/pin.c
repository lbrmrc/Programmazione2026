#include <stdio.h>

int main() {
  int pin;
arancio:
  printf("Inserisci PIN\n"); // PUNTINO ARANCIO
  scanf("%d", &pin);
  if (pin == 44122)
    printf("Accesso consentito\n");
  else
    goto arancio;
}