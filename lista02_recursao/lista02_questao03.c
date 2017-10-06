#include <stdio.h>

int dividir(int a, int b);

int main(){
  int a,b, divisao;
  printf("Digite A e B\n");
  scanf("%i %i", &a, &b);

  divisao = dividir(a, b);

  printf("%i\n", divisao);
  return 0;
}

int dividir(int a, int b){
  if(a < b)
    return 0;
  else
    return (1 +  dividir(a - b, b));
}
