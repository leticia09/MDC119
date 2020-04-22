#include<stdio.h>
#include<string.h>

 typedef struct funcionario_t
 {
 	char nome[50];
 	double salario;
 	char admissao[10];
 };
 // ALT + SHIFT + F =FORMATA O CÓDIGO 
 // CTRL + ESPAÇO = INTELLISENCE COMPLETA CÓDIGO
 // CTRL + X = APAGA LINHA
 // ALT + SETA P/CIMA = MOVE A LINHA P/ CIMA
 // ALT + SETA P/BAIXO = MOVE A LINHA P/ BAIXO
 //CTRL + ; = COMENTAR LINHA
 void main()
 {
 	int total = 0;
 	struct funcionario_t funcionario[100];
 	struct funcionario_t funcionario;
 	
 	scanf("%s", funcionario.nome);
 	while (!strcmp(funcionario.nome))
 	{
 		scanf("%lf", &funcionario.salario);
 		scanf("%s", &funcionario.admissao);
 		
 		funcionarios[total++] = funcionario;
 		
 		scanf("%s", funcionario.nome);
 		
	 }
	 
	 for (int i = 0; i < total; i++)
	 {
	 	printf("%s, %.2lf, %s\n", funcionario.nome, funcionario.salario, funcionario.admissao);
	 }
	 
	 }
	 
 }



