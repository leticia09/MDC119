#vetor.h

#icndef_vetor_h
#define_vetor_h

int maior(int *vetor);
int menor(int *vetor);
int procurar(int elemento, int *vetor);

#endif

vetor.c

#include"vetor.h"

int maior(int *vetor){
    int maior=vetor[0];
while(vetor != 0){
    if(maior<*vetor){
        maior=*vetor;
}
return maior;
}