#include <stdio.h>

int main(){
    int n, nCicli = 0;

    printf("Inserire un numero intero positivo:\n");
    scanf("%d", &n);

    while(n > 1){
        if(n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        nCicli++;

        printf("Passo %d: n = %d\n", nCicli, n);
    }

    printf("Numero di passaggi: %d\n", nCicli);
}