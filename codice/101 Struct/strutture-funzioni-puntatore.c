#include <stdio.h>

typedef struct {
  char nome[30];
  int eta;
} Persona;

void assegna_eta(Persona *pp, int e){
   (*pp).eta = e;
}

int main(){
    Persona p = {"Giovanni", 30};
    assegna_eta(&p, 40); // p.eta diventa 40
    printf("%d\n", p.eta);
}