#include <stdio.h>
#include <stdlib.h>

int is_bissexto(int i){
    int ano;

if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    printf("\n O ano %d e bissexto.\n", ano);
  }
  
  else {
    printf("\nO ano %d não e bissexto.\n", ano);
  }
}

int main(int arc, char *argv[]){
int ano;

printf("Digite o ano:\n");
scanf("%d", & ano);

is_bissexto(ano);

}