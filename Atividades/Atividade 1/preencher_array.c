#include<stdio.h>
#include<stdlib.h>

int main(){

int array[10];
int i;

for (i = 0; i < 10; i++)
{
    printf("Digite um número:");
    printf("\n");
	scanf("%d", &array);
}
for (i = 0; i < 10; i++)
{
    printf("%d", array);
}

}



