#include<stdio.h>
#include<stdlib.h>

struct carro_t{
    char marca[10];
    int ano;
    double valor;
}

int main(int argc, char const *argv[]){

float valor_depreciado;
carro_t car;

car.marca = "Honda";
car.ano = 2016;
car.valor = 50.000;

valor_depreciado= car.valor - (2020 - car.ano)*0.01*car.valor

printf("O valo do depreciado do carro é: %f", valor_depreciado);
}
