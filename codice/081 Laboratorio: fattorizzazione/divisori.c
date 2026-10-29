#include <stdio.h>

int main(){
    int n;
    int i;
    printf("Inserisci un numero intero\n");
    scanf("%d", &n);
    for (i = 1; i<=n; i++)
    {
        // i itera [1..n];
        if (n % i ==0){
            // i itera filter(divide n, [1..n]),
            // cioè i è un divisore di n
            printf("%d\n", i);
        }
    }
}