#include <stdio.h>

int mdc(int n1, int n2);

int main(){
  int number1, number2;

  printf("Digite o valor de number1: ");
  scanf("%i", &number1);
  printf("Digite o valor de number2: ");
  scanf("%i", &number2);

  printf("MDC(%i, %i) = %i\n", number1, number2, mdc(number1, number2));

  return 0;
}

int mdc(int n1, int n2){
  if(n2 == 0)
    return n1;
  else
    return(mdc(n2, n1 % n2));
}
