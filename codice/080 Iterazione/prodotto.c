#include <stdio.h>

int main(){
    // stampa reduce(*, 1 ,[1..6]) = 1 * 2 ... * 6
    int i; // iteratore
    int a; // accumulatore

    a = 1; // inizializzazione accumulatore
    for (i = 1; i<=6; i++){
        // i itera [1..10]
        a = a * i; // aggiornamento accumulatore
    }

    // a vale 1 * 2 * 3....*6;
    printf("%d\n", a);
}