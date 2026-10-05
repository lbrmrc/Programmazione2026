#include <stdio.h>

int main() {
    int a, b;

    printf("Inserisci il valore di a: ");
    scanf("%d", &a);

    printf("Inserisci il valore di b: ");
    scanf("%d", &b);

    printf("\nIl valore di a è: %d\n", a);
    printf("Il valore di b è: %d\n", b);

    printf("\nScambio!\n");

    int temp = a;
    a = b;
    b = temp;

    printf("Il nuovo valore di a è: %d\n", a);
    printf("Il nuovo valore di b è: %d\n", b);
}