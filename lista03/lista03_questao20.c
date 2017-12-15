#include <stdio.h>

int main(){
  int vet[10] = {1,2,3,4,5,6,7,8,9,0};
  int * point = vet;

  for(int i = 0; i < 10; i++){
    if(i < 9)
      printf("%i ", *(point + i));
    else
      printf("%i\n", *(point +i));
  }

  return 0;
}
