#include <stdio.h>
#include <stdlib.h>
int main()
{
    int resultado;
    int resto;
    for (int i = 0; i < 100; i++)
    {
        resultado = i % 3;
        if (resultado == 0)
        {
        printf("%d, " ,i);
        }
    }
}