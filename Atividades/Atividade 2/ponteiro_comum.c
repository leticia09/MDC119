#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=10;
    int *ptr;

   ptr=&x;

printf("Valor do x=%d\n", x);
printf("Valor do ptr=%p\n", *ptr);
    
}
