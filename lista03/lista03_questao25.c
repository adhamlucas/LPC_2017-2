#include <stdio.h>

int main(){
  int x, *p;

  x = 10;
  p = &x;
  *p = x + 20;

  printf("*p = %i\n", *p);
  printf("x = %i\n", x);

  return 0;
}

/*
  A sintaxe p = x está incorreta porque p é uma variável ponteiro do tipo inteiro,
  logo deveria receber um endereço do tipo inteiro e não um valor do tipo inteiro,
*/
