#include <stdio.h>

float parabola(float a, float b, float c, float x){
    return a *x*x + b*x + c;
}

int main() {
  float ascisse[21];
  float ordinate[21];
  int i;
  float a, b, c;
  printf("Inserisci i tre parametri\n");
  scanf("%f%f%f", &a, &b, &c);

  // inizializzazione ascisse con [-1.0, -0.9, ..., 0.9, 1.0]
  // ascisse = map(..., [0..20])
  for (i = 0; i <= 20; i++) {
    // i itera [0..20]
    ascisse[i] = -1.0 + 0.1 * i;
    // ascisse[0] = -1.0 + 0.1 * 0;  // 0
    // ascisse[1] = -1.0 + 0.1 * 1;  // 1
    // ascisse[2] = -1.0 + 0.1 * 2;  // 2
    // ...
    // ascisse[19] = -1.0 + 0.1 * 19; // 19
    // ascisse[20] = -1.0 + 0.1 * 20; // 20 }
  }

  // ordinate = map(parabola, ascisse)
  for (i = 0; i <= 20; i++)
    ordinate[i] = parabola(a,b,c, ascisse[i]);

  for (i = 0; i<=20; i++){
    // i itera [0..20]
    // ascisse[i] itera ascisse
    // ordinate[i] itera ordinate
   printf("%.3f\t%.3f\n",  ascisse[i],  ordinate[i]);
   }
}