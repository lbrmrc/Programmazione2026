#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;
    int eta = 34;
    double altezze[3] = {1.75, 1.83, 1.79};

    pf = fopen("dati.bin", "wb");
    if (pf == NULL){
        printf("Errore apertura file\n");
        exit(1);
    }

    fwrite(&eta, sizeof(int), 1, pf);
    fwrite(altezze, sizeof(double), 3, pf);

    if (fclose(pf) != 0){
        printf("Errore chiusura file\n");
        exit(2);
    }
}