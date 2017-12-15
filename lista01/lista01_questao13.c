#include <stdio.h>

int count_divisores(int number);

int main(){
  int number, divisor_number;

  printf("Digite um número: ");
  scanf("%i", &number);

  divisor_number = count_divisores(number);

  printf("A quantidade de divisores de %i é: %i\n", number, divisor_number);
}

int count_divisores(int number){
  int i, count = 0;


  for(i = 1; i <= number; ++i){
    if(!(number % i)) count += 1;
  }

  return count;
}
