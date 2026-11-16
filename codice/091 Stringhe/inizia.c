#include <stdio.h>

int main() {
  char s1[21], s2[21];
  int diversi; // flag che dice che s2 non inizia con s1
  int i;

  scanf("%s%s", s1, s2);
  diversi = 0;

  while (!diversi && s1[i] != 0) {
    if (s1[i] != s2[i])
      diversi = 1;
    i++;
  }

  if (diversi)
    printf("%s non inizia con %s\n", s2, s1);
  else
    printf("%s inizia con %s\n", s2, s1);
}