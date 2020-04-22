#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <cctype>

union u_produto {
    char nome;
    float preco;
    float volume;
    float peso;
}produto1;

struct s_produto {
    char nome;
    float preco;
    float volume;
    float peso;
}produto2;

struct s_itens {
    char nome;
    float preco;
    float volume;
    float peso;
}produto3, produto4;


int main(){
    
    produto1.nome='Arroz';
    produto1.preco=7.20;
    produto1.volume=1;
    produto1.peso=1000;

    produto2.nome='Feijao';
    produto2.preco=4.50;
    produto2.volume=1;
    produto2.peso=500;

    produto3.nome='sal';
    produto3.preco=6.00;
    produto3.volume=1;
    produto3.peso=500;

    produto4.nome='sabonete';
    produto4.preco=1.20;
    produto4.volume=1;
    produto4.peso=90;


printf("%d\n", sizeof (char));
printf("%d", sizeof (float));
}