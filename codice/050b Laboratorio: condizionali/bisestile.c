#include <stdio.h>

int main() {
  int anno; // variabile di input
  printf("Inserisci un anno\n");
  scanf("%d", &anno);
  if ((anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0))
    printf("Bisestile\n");
  else
    printf("Non bisestile\n");
}