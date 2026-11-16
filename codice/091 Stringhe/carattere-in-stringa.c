#include <stdio.h>

int main() {
  char c;
  char s[21];
  int i;
  printf("Inserisci un carattere e una stringa\n");
  scanf("%c%s", &c, s);
  i = 0;
  while (s[i] != 0 && c != s[i])
    i++;

  if (c == s[i])
    printf("%c è presente in %s\n", c, s);
  else
    printf("%c non è presente in %s\n", c, s);
}