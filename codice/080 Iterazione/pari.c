#include <stdio.h>

int main(){
    int i;
    for ( i = 1; i <= 20; i++)
    { // i itera [1..20]
        if (i % 2 != 0) // i è pari
        {
            // i itera [2, 4, 6, 8, .. 18, 20]
            printf("%d\n", i);
        }
    }
}