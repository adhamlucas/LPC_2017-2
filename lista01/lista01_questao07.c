#include <stdio.h>

int check_perfect_number(int number);

int main(){
  int number, boll_value;

  printf("Digite um número: ");
  scanf("%i", &number);

  boll_value = check_perfect_number(number);

  printf("%i é perfeito? %i\n",number, boll_value);
}

int check_perfect_number(int number){
  int i, boole, soma;

  soma = 0;

  for(i = 1; i < number; ++i){
    if(!(number % i)) soma += i;
  }
  if(soma == number) boole = 1;
  else boole = 0;

  return boole;
}
