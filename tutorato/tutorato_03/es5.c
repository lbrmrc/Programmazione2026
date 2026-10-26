#include <stdio.h>

int main(){
    int n, num;
    int reversed, digit;
    int step = 0; // Mettere a 1 per vedere i passaggi ad ogni step

    printf("Inserire un numero\n");
    scanf("%d", &n);

    num = n; // salviamo il numero originale inserito dall'utente
    reversed = 0;

    while(num>0){
        digit = num % 10; // estraggo l'ultima cifra con modulo 10
        reversed = reversed * 10 + digit; // aggiungo la cifra estratta, uso il * 10 per allinearla correttamente
        num = num / 10; // rimuovo dal numero di partenza l'utlima cifra
        if (step) {
            printf("\ndigit = %d", digit);
            printf("\nreversed = %d", reversed);
            printf("\nrimanente = %d", num);
            printf("\n\n");
        }
    }

    if(n==reversed)
        printf("%d è palindromo\n",n);
    else
        printf("%d non è palindromo\n",n);
}