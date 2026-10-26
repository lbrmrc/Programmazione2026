#include <stdio.h>

int main() {

    int num,somma = 0, max = 0, min = 101;
    int i = 0;
    float media =  1.0;
    do {
        printf("utente inserisci un numero tra 1 e 100 (0 per terminare): \n");
        scanf("%d", &num);

        if (num > 100) {
            printf("errore numero troppo grande\n");
        } else if (num != 0) {
            somma += num;
            i++;

            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }
    } while (num != 0);

    media = (float)somma/i;
    printf("la somma è %d \n", somma);
    printf("il minimo è %d \n", min);
    printf("il massimo è %d \n", max);
    printf("la media è %.2f \n", media);
}
