#include <stdio.h>

void scambia(int *a, int *b)
{
    if (*a > *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

void ordina(int *a, int *b, int *c)
{
    scambia(a, b);   /* il minore tra a e b va in a */
    scambia(b, c);   /* il maggiore dei tre va in c */
    scambia(a, b);   /* sistema i primi due */
}

int main(void)
{
    int x, y, z;

    printf("Inserisci tre numeri interi: ");
    scanf("%d %d %d", &x, &y, &z);

    ordina(&x, &y, &z);

    printf("In ordine crescente: %d %d %d\n", x, y, z);
    return 0;
}