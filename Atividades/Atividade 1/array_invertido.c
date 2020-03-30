#include<stdio.h>
#include<stdlib.h>

int main(){

int array[10];
int a, b;

for (a = 0;a<10;a++)
    {
    printf("Digite um numero\n");
    scanf("%d", &array[a]);
    printf("\n");
    }
for (b = 9; b >= 0; b--)
    {
        printf("%d\n", array[b]);
    }
    return 0;
}