#include <stdio.h>

struct ponto{
  int x;
  int y;
};
typedef struct ponto Ponto;

int main(){
  Ponto vetor;

  printf("Digite as coodenadas do vetor: ");
  scanf("%i %i", &vetor.x, &vetor.y);

  printf("vetor = %ii + %ij\n", vetor.x, vetor.y);

  return 0;
}
