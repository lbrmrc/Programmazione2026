#include <stdio.h>

void aggiorna(int valore, int *min, int *max, int *somma)
{
    if (valore < *min)
        *min = valore;
    if (valore > *max)
        *max = valore;
    *somma += valore;
}

int main(void)
{
    int n, valore, min, max, somma;

    do {
        printf("Quanti numeri vuoi inserire? ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Numero 1: ");
    scanf("%d", &valore);
    min = valore;
    max = valore;
    somma = valore;

    for (int i = 2; i <= n; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &valore);
        aggiorna(valore, &min, &max, &somma);
    }

    printf("Minimo: %d\n", min);
    printf("Massimo: %d\n", max);
    printf("Media: %.2f\n", (double)somma / n);
    return 0;
}