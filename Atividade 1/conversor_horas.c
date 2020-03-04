#include<stdio.h>
#include<stdlib.h>
int main ()
 {
float seg, min, horas;

//printf("Digite os segundos:\n");
//scanf("%d", &seg);
seg=18900;
horas=seg/60/60;
min=seg/60;

printf("O resultado em horas, minutos e segundos é : %f : %f : %f", horas, min, seg);

}