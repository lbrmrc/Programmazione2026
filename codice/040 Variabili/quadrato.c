#include <stdio.h>

int main(){
    int lato;
    // area è lato * lato
    // perimetro è lato * 4
    printf("Inserisci il lato del quadrato\n");
    scanf("%d", &lato);
    printf("Area: %d\n", lato * lato);
    printf("Perimetro: %d\n", lato * 4);
}