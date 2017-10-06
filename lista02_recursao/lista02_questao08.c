#include <stdio.h>

double somar_sequencia(int n);
int fibonacci(int n);

int main(){
  int n;
  double soma;

  printf("Digite o valor n: \n");
  scanf("%i", &n);

  soma = somar_sequencia(n);
  printf("%lf\n", soma);
  return 0;
}

double somar_sequencia(int n){
  if(n == 1)
    return (1.0/2);
  else
    return (somar_sequencia(n-1) + (fibonacci(n) / ( 2.0*n)));
}

int fibonacci(int n){
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n - 1) + fibonacci(n - 2));
}
