int f(int *p){
    *p = 3;
}

int main(){
    int a = 5;
    f(&a);
}