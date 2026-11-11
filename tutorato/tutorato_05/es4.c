#include <stdio.h>

void analizza(int n, int *cifre, int *somma, int *inverso)
{
    *cifre = 0;
    *somma = 0;
    *inverso = 0;

    while (n > 0) {
        int c = n % 10;
        *somma += c;
        *inverso = *inverso * 10 + c;
        (*cifre)++;
        n /= 10;
    }
}

int main(void)
{
    int n, cifre, somma, inverso;

    do {
        printf("Inserisci un intero positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    analizza(n, &cifre, &somma, &inverso);

    printf("Cifre: %d\n", cifre);
    printf("Somma delle cifre: %d\n", somma);
    printf("Numero invertito: %d\n", inverso);

    if (n == inverso)
        printf("Il numero e' palindromo.\n");
    else
        printf("Il numero non e' palindromo.\n");

    return 0;
}