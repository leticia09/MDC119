#include<stdio.h>
#include<stdlib.h>
int main(){
     FILE *arquivo;

     arquivo = fopen("dados.txt", "r");

     if (arquivo == NULL){
         printf("Erro na leitura");
         return 1;
     }

   printf("PRESSIONE ENTER...");
   getchar();

   fclose(arquivo);
   return 0;

} 
