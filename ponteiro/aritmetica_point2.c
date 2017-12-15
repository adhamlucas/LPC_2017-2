#include <stdio.h>

int imprimirx(int *x[10]);

int main(){
  int *x[10];
  int var[10];

  for(int i = 0; i < 10; i++){
    printf("Digite um valor: ");
    scanf("%i", &var[i]);
    *(x + i) = &var[i];
  }
  imprimirx(x);

  return 0;
}

int imprimirx(int *x[10]){
  for(int i = 0; i < 10; i++)
    printf("%5d", **(x + i));
  printf("\n");
}
