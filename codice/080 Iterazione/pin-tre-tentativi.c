#include <stdio.h>

int main() {
  int pin;
  int tentativi;
  tentativi = 0;
  do {
    scanf("%d", &pin);
    tentativi++;
  } while (pin != 44122 && tentativi < 3);

  if (pin == 44122)
    printf("Accesso consentito\n");
  else
    printf("Accesso negato\n");
}
