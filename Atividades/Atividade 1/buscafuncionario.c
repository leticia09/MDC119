#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
	int funcionarios[7][2]= {1111,30001000,2222,30002000,3333,30003000,4444,30004000,5555,30005000,6666,30006000,7777,30007000};
	int matricula;
	int i;
	
	printf("Digite a matricula do funcionário:");
	scanf("%i", &matricula);
	
	for(i=0;i<7;i++)
	    if(matricula==funcionarios[i][1]){
	    	printf("funcionario: %i\n", funcionarios[i][0]);
			}
		}
