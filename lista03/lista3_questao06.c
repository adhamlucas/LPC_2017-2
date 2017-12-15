#include <stdio.h>

void main(){
  float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.7};
  float *f;
  int i;
  f = vet;
  printf("contador / valor /valor/ endereço/ endereço");
  for(i = 0; i <=4; i++){
    printf("\ni = %d", i);
    printf(" vet[%d] = %.1f", i, vet[i]);
    printf(" *(f+ %d) = %.1f", i, *(f+i));
    printf(" &vet[%d] = %X", i, &vet[i]);
    printf(" (f + %d) = %X\n", i, f+i);
  }

}

/*
  O programa declara um vetor de float com 5 posições onde armazena alguns valores para cada posição,
  declara uma variável do tipo ponteiro para float *f,
  declara uma variável inteira i;
  Faz com que f receba o endereço da priemira posição do vetor vet;
  Então em um laço de de 5 iterações indo i =0 até i = 4 de 1 em 1 imprime:
    O valor do contador i
    O elemento da posição i de vet com apenas 1 número após a vírgula
    O elemento da posição f+i e o valor armazenado nessa posição usando artimética de ponteiro;
    O valor de i na posição de vet e o endereço dessa posição;
    O valor de i na posição de f + i e o endereço dessa posição usando aritmética de ponteiro;

*/
