#include <stdio.h>

int f(int a){
    return a * a;
}

int main(){
    int i;

  // Soutput = map(quadrato, [1..5])
    for (i = 1; i <= 5; i++){
        // i itera [1..5]
        printf("%d\n", f(i));
    }
}