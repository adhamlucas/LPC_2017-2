#include <stdio.h>

void conversor_decimal_binary(int decimal);
void print_binario(int number);

int main(){
  int decimal_Number, binary;

  printf("Digite o número em decimal: ");
  scanf("%i", &decimal_Number);

  print_binario(decimal_Number);

  return 0;
}

void conversor_decimal_binary(int decimal){

  if(decimal){
    conversor_decimal_binary(decimal/2);
    printf("%i", decimal%2);
  }
}

void print_binario(int number){
  printf("%i em binário: ", number);
  conversor_decimal_binary(number);
  printf("\n");
}
