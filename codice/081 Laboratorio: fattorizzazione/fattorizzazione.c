#include <stdio.h>

int primo(int n) { // 1 se n è primo, 0 altrimenti
  int i;           // iteratore di [1..n]
  int n_divisori;

  if (n < 2)
    return 0;

  n_divisori = 0;
  for (i = 2; i * i <= n; i++) {
    // i itera l'inizio di 2..radice_quadrata(n)
    if (n % i == 0) // i divide n
    {
      // i itera l'inizio di Sd = filter(divide n, 2..radice_quadrata(n))
      // Sd ha almeno 1 elemento; quindi n non è primo
      return 0;
    }
  }
  // Sd è vuota; quindi n è primo
  return 1;
}

int main() {
  int n;
  int i;
  int q; // iteratore dei quozienti
  int esponente;
  printf("Inserisci un numero intero\n");
  scanf("%d", &n);
  q = n;
  for (i = 1; i <= n; i++) {
    // i itera [1..n];
    if (n % i == 0) {
      // i itera filter(divide n, [1..n]) = S2,
      // cioè i è un divisore di n
      if (primo(i)) {
        // i itera filter(primo, S2)
        // cioè i è un divisore primo di n
        esponente = 0;
        while (q % i == 0) // i divide q
        {                  // q itera la sequenza dei quozienti divisibili per i
          q = q / i;
          esponente++;
        }
        // i è un divisore primo di n
        // esponente è l'esponente di i nella fattorizzazione
        printf("%d", i);
        if (esponente > 1)
          printf("^%d", esponente);
        if (q > 1)
          printf(" x ");
      }
    }
  }
  printf("\n");
}