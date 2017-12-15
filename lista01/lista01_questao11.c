#include <stdio.h>

int ler_valores();

int main(){
  int matriz[50], maior, menor,  number, i;

  ler_valores();
}

int ler_valores(){
  printf("Digite os valores da matriz\n" );

  for(i = 0; i < 50; ++i){
    scanf("%i", &matriz[i]);
  }

  maior = matriz[0];
  menor = matriz[0];

  for(i = 0; i < 50; ++i){
    if(maior < matriz[i]) maior = matriz[i];
    else if(menor > matriz[i]) menor = matriz[i];
  }

  printf("O maior número é: %i\n", maior);
  printf("O menor número é: %i\n", menor);
}
