#include <stdio.h>

int main(){
    // stampa reduce(+, 0 ,[1..10]) = 1 + 2 + 3 + 4... + 9 + 10
    int i; // iteratore
    int a; // accumulatore

    a = 0;
    for (i = 1; i<=10; i++){
        // i itera [1..10]
        a = a + i;
    }

    // a vale 1 + 2 + 3 + ... + 9 + 10;
    printf("%d\n", a);
}