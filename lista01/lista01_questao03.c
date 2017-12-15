#include <stdio.h>

int verificar_num_primo(int number);

int main(){
  int number, logical_value;

  printf("Digite um número: ");
  scanf("%i", &number);

  logical_value = verificar_num_primo(number);

  printf("%i é primo = %i\n", number, logical_value);
}

int verificar_num_primo(int number){
  int i, count;

  count  = 0;

  for(i = 1; i <= number; ++i){
    if(!(number % i)) count += 1;
  }

  if(count == 2) return (count == 2);
  else return (count == 2);
}
