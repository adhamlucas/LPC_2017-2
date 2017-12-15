#include <stdio.h>

int main(){
  int vet[11] = {1,2,3,4,1,2,5,2,3,10,11};
  int *p, *q;

  p = vet;
  q = &vet[11];

  for(int i = 0; i != (10- i); i++){
    printf("p[%i] = %i\t q[%i] = %i\n", (i+1), p[i], (11-i), q[10-i]);
  }
  printf("Se encontraram\n");

  return 0;
}
