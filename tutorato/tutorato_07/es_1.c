#include <stdio.h>
#define DIM 50
#define N 3  

typedef struct 
{
    char nome[DIM];
    char cognome[DIM];
    int matricola;
} studente;

void stampaStudente(studente s) {
    printf("Nome: %s\n", s.nome);
    printf("Cognome: %s\n", s.cognome);
    printf("Matricola: %d\n\n", s.matricola);
}

void stampaTuttiStudenti(studente studenti[], int n) {
    printf("Elenco studenti:\n", i + 1);
    for (int i = 0; i < n; i++) {
        printf("Studente %d:\n", i + 1);
        stampaStudente(studenti[i]);
    }
}

int main() {
    studente studenti[N]; 

    for (int i = 0; i < N; i++) {
        printf("Inserisci i dati dello studente %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", studenti[i].nome);

        printf("Cognome: ");
        scanf("%s", studenti[i].cognome);

        printf("Matricola: ");
        scanf("%d", &studenti[i].matricola);

        printf("\n"); 
    }

    stampaTuttiStudenti(studenti, N);

    return 0;
}