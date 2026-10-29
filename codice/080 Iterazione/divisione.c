#include <stdio.h>

int main(){
    int dividendo, divisore;
    int d; // iteratore di Sd
    int acc;

    printf("Inserisci dividendo e divisore\n");
    scanf("%d%d", &dividendo, &divisore);

    d = dividendo;
    acc = 0;
    while (d - divisore >=0)
    {
        // d itera Sd
        d = d - divisore;
        acc++;
    }
    // acc contiene il conteggio di Sd, cioè il quoziente
    // d contiene il resto
    printf("Quoziente: %d\n", acc);
    printf("Resto: %d\n", d);
}