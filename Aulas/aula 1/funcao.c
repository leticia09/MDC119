#include<stdio.h>
int soma(int i, int j){
    return i+j;
    }
//void imprime() { 
   // printf("Olá mundo");
//}
void imprime(int i) {
printf ("%d", i);
}

void troca (int *i, int *j) {
    int a = *i;
    int *i = *j;
    int *j = a;
    }
int main (){
    int a,b;
    a = 10;
    b = 5;
    imprime(soma(a,b));
    troca(&a ,&b);
    printf ("%d %d\n", a, b);
}