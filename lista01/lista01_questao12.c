#include <stdio.h>

int tabuada(int number);

int main(){
  int number;

  printf("Digite um número: ");
  scanf("%i", &number);

  tabuada(number);
}

int tabuada(int number){
  int i;

  for(i = 1; i <= number; ++i){
    printf("%i x %i = %i\n", i, number, (i * number));
  }
}
