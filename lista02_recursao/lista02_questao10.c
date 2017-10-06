#include <stdio.h>

double sequence(int n);

int main(){
  int n;

  printf("Digite o valor de n: ");
  scanf("%i", &n);

  printf("Resultado: %.10lf\n", sequence(n));

  return 0;
}

double sequence(int n){
  if(n == 1)
    return (1.0 / 2);
  else
    return (sequence(n - 1) + ((n * n + 1.0) / (n + 3)));
}
