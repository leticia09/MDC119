#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
	double notas[10][3];
	int i;
	float media;
	
	for(i==0;i<10;i++){
		printf("Digite a primeira nota dos alunos:", notas[i][0]);
		scanf("%d", &notas[i][0]);
	    printf("Digite a segunda nota dos alunos:", notas[i][1]);
		scanf("%d", &notas[i][1]);
	}
	
	
	notas[i][2]=(notas[i][0]+notas[i][1])/2;
	media=notas[i][2];
	
    for(i=0;i<10;i++){
    	printf("Primeria nota: %d\n", notas[i][0]);
    	printf("Segunda nota:%d\n", notas[i][1]);
	    printf("A media é: %d\n", media[i][2]);
	}

	

}
