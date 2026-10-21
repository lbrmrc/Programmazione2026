void divisione(int dividendo, int divisore, int *pq, int *pr){
   *pq = dividendo / divisore;
   *pr = dividendo % divisore;
}

int main(){
    int quoziente, resto;
    divisione(15, 0, &quoziente, &resto);
    // quoziente vale 7, resto vale 1   
}