typedef struct {
  char nome[30];
  int eta;
} Persona;

int main(){
  Persona p1 = {"Giovanni", 30};
  Persona p2 = {"Maria", 25};
  // non si può scrivere p2 = {"Lucia", 40};
}