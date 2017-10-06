#include <stdio.h>

int vetor[100];

int print_inverse_value(int vetor[], int n);

int main(){
  int i, n;

  printf("Digite o valor de n: ");
  scanf("%i", &n);

  for(i = 0; i < n; ++i){
    printf("Digite vetor[%i]: ", i + 1);
    scanf("%i", &vetor[i]);
  }

  print_inverse_value(vetor, n);

  return 0;
}

int print_inverse_value(int vetor[], int n){
  if(n > 0){
    printf("%i\n", vetor[n - 1]);
    return (print_inverse_value(vetor, n - 1));
  }

}
