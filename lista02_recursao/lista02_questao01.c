#include <stdio.h>

int somar_vetor(int vetor[], int n);

int main(){
  int vetor[10];
  int n,i, soma;

  for (i = 1; i <= 10; ++i){
    vetor[i-1] = i;
  }

  printf("Digite o valor de n: \n");
  scanf("%i", &n);

  soma = somar_vetor(vetor, n);
  printf("%i\n", soma);
}

int somar_vetor(int vetor[], int n){
  if (n == 0)
    return 0;
  else
    return (vetor[n-1] + somar_vetor(vetor, (n-1)));
}
