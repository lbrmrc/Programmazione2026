#include <stdio.h>

int massimo(int a, int b){
    if (a >= b)
        return a;
    else
        return b;
}

int main(){
    printf("massimo(%d,%d) = %d\n", 2, 3, massimo(2,3));
    printf("massimo(%d,%d) = %d\n", 3, 2, massimo(3,2));
    printf("massimo(%d,%d) = %d\n", 3, 3, massimo(3,3));
}