#include <stdio.h>
#define DIM 20
int main(){
    char nome[DIM];
    int i;
    printf("Come ti chiami?\n");
    for (i = 0; i < DIM; i++)
        scanf("%c", &nome[i]);
    printf("Ciao, ");
    for (i = 0; i < DIM; i++)
        printf("%c", nome[i]);
    printf("!\n");
}