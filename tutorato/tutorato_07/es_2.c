#include <stdio.h>
#include <string.h>

#define DIM 100
#define DIMSTR 20

typedef struct {
	char nome[DIMSTR];
	char cognome[DIMSTR];
	int  numero;
} contatto;

void stampaContatto(contatto c){
    printf("%s\t\t%s\t%d\t\n", c.nome, c.cognome, c.numero);
}

void stampaRubrica(contatto r[], int dl){
    printf("NOME\t\tCOGNOME\tNUMERO\t\n");
    for(int i = 0; i<dl; i++){
        stampaContatto(r[i]);
    }
}

void inserisciNuovoContatto(contatto r[], int* pdl){ 
    contatto c;
    printf("Inserisci il nome: ");
    scanf("%s", c.nome);
    printf("Inserisci il cognome: ");
    scanf("%s", c.cognome);
    printf("Inserisci il numero: ");
    scanf("%d", &c.numero);

    r[(*pdl)] = c;

    (*pdl)++;
}

void cercaContatto(contatto* r, int dl){
    int trovato=0;
    char trovaCognome[DIMSTR];
    printf("Inserisci il cognome: ");
    scanf("%s", trovaCognome);

    int i=0;
    while(i<dl){
        if(strcmp(r[i].cognome, trovaCognome) == 0){
            if(trovato==0){
                printf("Trovato:\n");
            }
            stampaContatto(r[i]);
            trovato=1;
        }
        i++;
    }

    if(trovato==0){
        printf("Nessun contatto trovato.\n");
    }
}

int main(){
    contatto rubrica[DIM];
    char nome[DIMSTR], cognome[DIMSTR], scelta;
    int  numero, dl = 0; // dl è la dimensione logica della rubrica mi definisce la lunghezza e posso usarlo per tenere traccia dei contati che aggiungo per provare l'esercizio

    // Posso assegnare dei contatti gestendo dl opportunamente per testare subito la funzione stampa rubrica 
    contatto c = {"Mario", "Rossini", 1234567890}; 
    rubrica[dl] = c;
    dl++;

    contatto c2 = {"Pino", "Rossini", 1654321};
    rubrica[dl] = c2;
    dl++;

    do{
        printf("Cosa vuoi fare (q per uscire)?\n");
        printf("\ta. Stampa l'intera rubrica\n");
        printf("\tb. Inserisci un nuovo contatto in rubrica\n");
        printf("\tc. Cerca un contatto in rubrica\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);

        switch (scelta){
        case 'a':
            stampaRubrica(rubrica, dl);
            break;

        case 'b':
            inserisciNuovoContatto(rubrica, &dl);
            break;

        case 'c':
            cercaContatto(rubrica, dl);
            break;

        case 'q':
            break;
        
        default:
            printf("Scelta non valida.");
            break;
        }

        printf("\n\n");

    }while(scelta != 'q');

    return 0;
}

