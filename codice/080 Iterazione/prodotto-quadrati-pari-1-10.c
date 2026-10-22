#include <stdio.h>

int main(){
    int i;
    int a; // a deve valere reduce(*, 1, S3)

    a = 1;
    for(i =1; i<= 10; i++)
    {
        // i itera 1..10 = S1
        if (i % 2 == 0){
            // i itera filter(pari, S1) = S2
            // i * i itera map(quadrato, S2) = S3
            a = a * (i*i);
        }
    }
    // a contiene il prodotto dei quadrati dei numeri pari compresi fra 1 e 10
    printf("%d\n", a);
}