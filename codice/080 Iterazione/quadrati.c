#include <stdio.h>

int main(){
    int i;
    // S1 = [1, 2, 3, ..., 9, 10]
    // Soutput = [1, 4, 9, ..., 81, 100]

    // itero i su S1

    for (i = 1; i <= 10; i++){
        
        
        // i prende valori da S1
        printf("%d\n", i * i);
    }
}