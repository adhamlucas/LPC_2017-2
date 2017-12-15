#include <stdio.h>

float fatorial(float number);
float calculate_c(float n, float P, float p);


int main(){
  float n, P, p, resultado;

  printf("Digite os valores de n, P e p: ");
  scanf("%f %f %f", &n, &P, &p);

  resultado = calculate_c(n, P, p);

  printf("O valor de C = %.2f\n", resultado );
}

float calculate_c(float n, float P, float p){
  float c;

  c = fatorial(n) / (fatorial(P) * fatorial(n - p));

  return c;
}

float fatorial(float number){
  float fat;

  if(!number) fat = 1;
  else{
    fat = number * fatorial(number - 1);
  }
  return fat;
}
