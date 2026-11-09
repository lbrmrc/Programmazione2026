#include <stdio.h>
#define DIM 20
int main(){
    char nome[DIM];
    int dl, i;
    printf("Quante lettere ha il tuo nome?\n");
    scanf("%d", &dl);
    printf("Come ti chiami?\n");
    for (i = 0; i < dl; i++)
        scanf("%c", &nome[i]);
    printf("Ciao, ");
    for (i = 0; i < dl; i++)
        printf("%c", nome[i]);
    printf("!\n");
}