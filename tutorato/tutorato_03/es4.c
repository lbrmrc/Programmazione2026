#include <stdio.h>

int main(){
    int a, b, r, magg, min;

    printf("Inserisci il valore di a: ");
    scanf("%d", &a);
    printf("Inserisci il valore di b: ");
    scanf("%d", &b);

    // Poiché deve essere 0 <= b < a, possiamo decidere invece di terminare il programma se b > a di inverterire gli input
    if(a>b){
        magg=a;
        min=b;
    }
    else{
        magg=b;
        min=a;
    }

    while(min!=0){
        r=magg%min;
        magg=min;
        min=r;
    }
    
    if(a>b){
        printf("mcd(%d,%d)=%d\n",a,b,magg);
    }
    else{
        printf("mcd(%d,%d)=%d\n",b,a,magg);
    }
}