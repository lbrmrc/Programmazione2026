#include <stdio.h>

int main(){
    char s[20];
    int i;
    scanf("%s", s); // Ferrara 44100

    for(i=0; s[i]!= 0; i++){
        // se s[i] è una minuscola, la rendiamo maiuscola
        if (s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
    }
    printf("%s\n", s); // FERRARA 44100

}