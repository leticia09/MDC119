#include <stdlib.h>
#include <stdio.h>

int main () {
    int ano;

printf("Digite o ano:\n");
scanf("%d", & ano);

if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    printf("\n O ano %d é bissexto.\n", ano);
  }
  
  else {
    printf("\nO ano %d não é bissexto.\n", ano);
  }

}