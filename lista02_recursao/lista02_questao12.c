#include <stdio.h>

int number_rep(int matriz[], int n, int number);
void scan_vetor(int n);
int vetor[100];

int main(){
  int n, result, number;

  printf("Digite o tamanho do vetor: ");
  scanf("%i", &n);
  printf("Digite o número a ser buscado: ");
  scanf("%i", &number);

  scan_vetor(n);
  result = number_rep(vetor, n-1, number);

  printf("Qtd de repetições de %i: %i\n", number, result);
  return 0;
}

void scan_vetor(int n){
  int i;
  for(i = 0; i < n; ++i){
    printf("Digite vetor[%i]: ", i+1);
    scanf("%i", &vetor[i]);
  }
}


int number_rep(int matriz[], int n, int number){
  if(n < 0)
    return 0;
  if(matriz[n] == number)
    return 1 + number_rep(matriz, n - 1, number);
  else
    return number_rep(matriz, n-1, number);
}
