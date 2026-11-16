#include <stdio.h>

int main() {
  char s1[21];
  char s2[21];
  int i;
  int differenza;
  scanf("%s%s", s1, s2);
  // s1 = "Ferrara"
  // s2 = "Bologna"
  // "Bologna precede Ferrara"

  i = 0;
  differenza = s1[i] - s2[i];

  while (s1[i] != 0 && s2[i] != 0 && s1[i] - s2[i] == 0)
    i++;
  differenza = s1[i] - s2[i];
  if (differenza == 0)
    printf("%s e %s sono uguali", s1, s2);
  else if (differenza < 0)
    printf("%s precede %s\n", s1, s2);
  else
    printf("%s precede %s\n", s2, s1);

  return 0;
}