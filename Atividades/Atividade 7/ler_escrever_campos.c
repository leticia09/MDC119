#include<stdio.h>
#include<stdlib.h>

int main (int argc, char const *argv[]){
    FILE *arquivo;
    int i;
    char nome[50];
    char no[50];
    char matricula[10];
    char c;

    arquivo=fopen("alunos.txt","w");
    if ( arquivo == NULL){
        printf("Falha ao abrir arquivo");
    }
    printf("matricula\n");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s", matricula);

    while(strcmp("0", matricula)){
        fprintf(arquivo, "%s", matricula);
        printf("nome");
        memset(nome, '\0', sizeof(nome));
        scanf("%s", nome);

        fprintf(arquivo, "%s", nome);
        printf("matricula");
        memset(matricula, '\0', sizeof(matricula));
        scanf("%s", matricula);
    }
      fclose(arquivo);
      arquivo=fopen("alunos.txt","r");

      while (fscanf(arquivo,"%10s\t%30s", matricula, nome) !- EOF){
          printf("%s-%s", matricula, nome);
      }
      
    fclose(arquivo);
    return 0;
}