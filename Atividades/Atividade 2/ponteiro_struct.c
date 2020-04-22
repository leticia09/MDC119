#include <stdio.h>
#include <stdlib.h>

struct s_aluno{
    int matricula;
    char nome[30];
    float media;
}aluno;

int main(){
    int *ptr;

    aluno.matricula=200192394;
    aluno.nome="Matheus";
    aluno.media=10;

    ptr=&aluno;

    printf("%p", *ptr);



}