#include <stdio.h>

typedef struct {
  char nome[30];
  int eta;
} Persona;

void assegna_eta(Persona p, int e){
    p.eta = e;
}

int main(){
    Persona p = {"Giovanni", 30};
    assegna_eta(p, 40); // p.eta rimane 30
    printf("%d\n", p.eta);
}