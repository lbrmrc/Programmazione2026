#include <stdio.h>

int main() {
  char c;
  scanf("%c", &c); 
  if (c >= 'A' && c <= 'Z')
    printf("Maiuscola\n");
  else if (c >= 'a' && c <= 'z')
    printf("Minuscola\n");
  else if (c >= '0' && c <= '9')
    printf("Cifra\n");
  else
    printf("Altro\n");
}