#include <stdio.h> // header di sistema

#include "aritmetica.h"

int main(){
    int a = 5, b = 7, c, d;

    c = somma(a, b);
    d = prodotto(a, b);

    printf("%d %d\n", c, d);
}