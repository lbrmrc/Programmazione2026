#include <stdio.h>

int main() {
  char s1[21];
  char s2[21];
  int i;
  scanf("%s%s", s1, s2);
  // s1 = "Ferrara"
  // s2 = "Bologna"
  // "Bologna precede Ferrara"

  i = 0;
  while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
    i++;
  if (s1[i] == s2[i])
    printf("%s e %s sono uguali", s1, s2);
  else if (s1[i] < s2[i])
    printf("%s precede %s\n", s1, s2);
  else
    printf("%s precede %s\n", s2, s1);
  return 0;
}