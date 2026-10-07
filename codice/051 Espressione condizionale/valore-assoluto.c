#include <stdio.h>

int main(){
    int n;
    printf("Inserisci un numero intero\n");
    scanf("%d", &n);
    printf("%d\n", n >= 0 ? n : -n);
}