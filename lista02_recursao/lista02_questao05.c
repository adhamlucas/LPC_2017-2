#include <stdio.h>

int somar_elementos(int matriz[], int n);

int main(){
  int i, soma, n, matriz[10];

  printf("Digite o valor de n: \n");
  scanf("%i", &n);

  for(i = 0; i < 10; ++i)
    scanf("%i", &matriz[i]);

  soma = somar_elementos(matriz, n);

  printf("Soma = %i\n", soma);
  return 0;
}

int somar_elementos(int matriz[], int n){
  if (n == 0)
    return 0;
  else
    return (matriz[n-1] + somar_elementos(matriz, (n - 1)));

}
