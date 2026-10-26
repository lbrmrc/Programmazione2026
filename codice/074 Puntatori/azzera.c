void azzera(int *pa){
    *pa = 0;
}

int main(){
    int a = 5;
    azzera(&a);
    // a vale 0
    return 0;
}