#include <stdio.h>
#define DIM 100

int indice_massimo(int v[], int dl){
    int m = 0, i;

    for (i = 1; i < dl; i++)
     if (v[i]> v[m])
        m = i;

    return m;
}

int leggi(int v[]){
    int quanti,i;
    printf("Quanti elementi?\n");
    scanf("%d", &quanti);
    for (i = 0; i <quanti;i++)
        scanf("%d", &v[i]);
    return quanti;
}

int main(){
    int a[DIM];
    int dl;

    dl = leggi(a);
    printf("%d\n", indice_massimo(a, dl));
}