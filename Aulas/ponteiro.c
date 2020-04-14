#include<stdio.h>
int main() {
    int *p;
    int x = 10;
    p = &x;

    printf("%d\n", *p);
    printf("%p\n", p);
  
  char *s = "Eu amo programar em C";
  int i = 0; 
  //while(s[i] != 0) {
   //   printf("%c", s[i]);
  //  i++;
 // }
  
  while(s != NULL) {
  	printf("%c", *s);
  	s++;
  }
return 0;
}