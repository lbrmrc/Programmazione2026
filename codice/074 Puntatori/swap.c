#include <stdio.h>

int main() {
    int a = 2, b = 3, t;

    t = b;
    b = a;
    a = t; // vecchio valore di b
    printf("%d %d\n", a, b); // stampa 3 2
}