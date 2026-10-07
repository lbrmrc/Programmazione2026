#include <stdio.h>

int main(){
    int numero; // variabile di input
    int massimo; // numero più grande letto finora (massimo provvisorio)
    printf("Inserisci tre numeri interi\n");
    scanf("%d", &massimo);
    
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero;
    
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero;
       
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero;    
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero;    
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero;    
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero;    
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero;    
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero;    
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero;    
    scanf("%d", &numero);
    if (numero > massimo)
        massimo = numero; 
    
    printf("Massimo: %d\n", massimo);
}