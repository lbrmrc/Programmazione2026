#include <stdio.h>

int main() {
  char s[20];
  int contatore;
  scanf("%s", s);
  contatore = 0;
  while (s[contatore] != 0) {
    contatore++;
  }
  printf("Lunghezza = %d\n", contatore);
  return 0;
}