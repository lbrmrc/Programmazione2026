#include <stdio.h>
#include <string.h>

int main(){
    printf("%d\n", strcmp("Ferrara", "Ferrara"));
    printf("%d\n", strcmp("Ferrara", "Bologna"));
    printf("%d\n", strcmp("Bologna", "Ferrara"));
    printf("%d\n", strcmp("Firenze", "Ferrara"));
}