#include <stdio.h>

int main(){
  int *x[10];
  int var;

  printf("Digite um valor: ");
  scanf("%d", &var);

  x[2] = &var;

  printf("O valor de var eh %d \n\n\n", **(x+2));
}
