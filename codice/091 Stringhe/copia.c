#include <stdio.h>

int main() {
  char s1[10] = "Ferrara";
  char s2[20] = "Milano Marittima";
  int i;
  i = 0;
  while (s1[i] != 0) {
    s2[i] = s1[i];
    i++;
  }
  s2[i] = 0;
  printf("%s\n", s2);
  return 0;
}