#include <stdio.h>

float s_function(int number);

int main(){
  int number;
  float resultado;

  printf("Digite um número: ");
  scanf("%i", &number);

  resultado = s_function(number);

  printf("%.4f\n", resultado);
}

float s_function(int number){
  int  fatorial, denominador, i, j;
  float s = 1;

  denominador = 1;
  fatorial = 1;

  for(i = 1; i <= number; ++i){
    for(j = 1; j <= denominador; ++j){
        fatorial *= j;
    }
    s += (1.0 / fatorial);
    fatorial = 1;
    ++denominador;
  }

  return s;

}
