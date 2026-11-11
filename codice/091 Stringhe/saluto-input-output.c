#include <stdio.h>
#define DIM 20
int main() {
  char nome[DIM];
  printf("Come ti chiami?\n");
  scanf("%s", nome);
  printf("Ciao, %s!\n", nome);
}