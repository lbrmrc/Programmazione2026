#include <stdio.h>

int massimo(int a, int b) {
  if (a >= b)
    return a;
  else
    return b;
}

int max3 (int a, int b, int c){
    return massimo(massimo(a,b), c);
}

int max4 (int a, int b, int c, int d){
    return massimo(massimo(a,b), massimo(c,d));
}

int max4b (int a, int b, int c, int d){
    return max(max3(a,b,c),d);
}

int main() {
  printf("massimo(%d,%d,%d) = %d\n", 5, 2, 3, max3(5, 2, 3));
  printf("massimo(%d,%d,%d) = %d\n", 3, 5, 2, max3(3, 5, 2));
  printf("massimo(%d,%d,%d) = %d\n", 3, 2, 5, max3(3, 2, 5));
}