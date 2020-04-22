#include <stdio.h>
#include <stdlib.h>

int converte_hhmmss_em_segundos(int h, int m, int s){
   s=18900;
   h=s/60/60;
   m=s/60;
}
int main(){

 printf("O resultado em horas, minutos e segundos é : %i : %i : %i" converte_hhmmss_em_segundos(h, m, s));

}