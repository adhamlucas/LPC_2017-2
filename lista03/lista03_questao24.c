#include <stdio.h>

int main(){
  int vet[10];
  int *p, *q;
  p = vet;
  q = vet;

  for(int i = 0; i < 10; i++)
    vet[i] = i;

  printf("Incremento de ponteiro\n");
  for(int i = 0; i < 10; i++){
    if(i < 9)
      printf("%i ", *p);
    else
      printf("%i\n", *p);
    p++;
  }


  printf("Ponteiro Indexado\n");
  for(int i = 0; i < 10; i++){
    if(i < 9)
      printf("%i ", q[i]);
    else
      printf("%i\n", q[i]);

  }

  return 0;
}
