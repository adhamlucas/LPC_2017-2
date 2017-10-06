#include <stdio.h>

int potenciacao(int k , int n);

int main(){
  int pot, k,n;

  printf("Digite o valor de k e n\n");
  scanf("%i %i", &k, &n);

  printf("%i\n", potenciacao(k, n));

  return 0;
}

int potenciacao(int k, int n){
  if (n == 0)
    return 1;
  else
    return (k * potenciacao(k, (n - 1)));
}
