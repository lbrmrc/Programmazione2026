#include <stdio.h>

int main(){
    int a, b, c;
    printf("Inserisci i lati del triangolo in ordine crescente di lunghezza\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a * a + b * b == c * c)
        printf("Il triangolo è rettangolo\n");
    else
        printf("Il triangolo non è rettangolo\n");
}