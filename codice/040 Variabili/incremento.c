#include <stdio.h>

int main(){
    int a = 5, b, c;
    b = a++;
    c = ++a;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
}