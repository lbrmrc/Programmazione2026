#include <stdio.h>
#define DIM 20
int main() {
  char nome[DIM], c;
  int i = 0;
  printf("Come ti chiami?\n");
  while (1) {
    scanf("%c", &c);
    if (c == '\n') // fine del nome
      break;
    nome[i] = c;
    i++;
  }
  nome[i] = 0; // terminatore
  printf("Ciao, ");
  i = 0;
  while (nome[i] != 0) { // terminatore non trovato
    printf("%c", nome[i]);
    i++;
  }
  printf("!\n");
}