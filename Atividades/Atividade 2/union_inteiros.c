#include <stdio.h>
#include <stdlib.h>

union u_numeros_inteiros{
    char caracter;
    short int inteiro_curto;
    int inteiro;
    long int inteiro_longo;
}numero;

int main(){
    numero.caracter=10.0f;
    printf("%d\n", numero.caracter);

    numero.inteiro_curto=15.0f;
    printf("%d\n", numero.inteiro_curto);

    numero.inteiro=4.0f;
    printf("%d\n", numero.inteiro);

    numero.inteiro_longo=36.0f;
    printf("%d\n", numero.inteiro_longo);
}