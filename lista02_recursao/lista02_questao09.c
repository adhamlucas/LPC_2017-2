#include <stdio.h>
#include <math.h>

int fatorial(int n);
double sequence(int n);

int main(){
  int n;

  printf("Digite o valor de n: ");
  scanf("%i", &n);

  printf("O resultado é: %.4lf\n", sequence(n));

  return 0;
}

int fatorial(int n){
  if(n == 1)
    return 1;
  else
    return fatorial(n - 1) * n;
}

double sequence(int n){
  if(n == 1)
    return 0;
  else
    return (sequence(n - 1) + (pow(-1, (n-1)) * 1.0/fatorial(n)));
}
