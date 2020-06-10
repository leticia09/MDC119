#include<stdio.h>
#include<stdlib.h>

int main (){
    FILE *arq;
    arq=fopen("arquivobin.bin", "w+b");

    if (arq==NULL){
        printf("ERRO ao abrir arquivo");
    }

    printf("Clique ENTER...");
    getchar();

    if(!feof(arq)){
        printf("FIM");
        return 1;
    }
fclose(arq);
return 0;

}
