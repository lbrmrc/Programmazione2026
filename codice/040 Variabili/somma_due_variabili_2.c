#include <stdio.h>

int main() {
    int a, b;
    printf("inserisci due numeri interi: ");
    scanf("%d%d", &a, &b);
    a = a + b;
    printf("inserisci il terzo numero: ");
    scanf("%d", &b);
    a = a + b;
    printf("la somma e': %d\n", a);
}