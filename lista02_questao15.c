#include <stdio.h>

int somatorio(int n);

int main(){
  int n;

  printf("Digite o valor de n: ");
  scanf("%i", &n);

  printf("Somatório = %i\n", somatorio(n));

  return 0;
}

int somatorio(int n){
  if(n == 1)
    return 1;
  else
    return (somatorio(n - 1) + n);
}
