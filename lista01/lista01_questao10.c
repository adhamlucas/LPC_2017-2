#include <stdio.h>

float peso_ideal(float altura, char sexo);

int main(){
  float altura, peso;
  char sexo;

  printf("Digite a sua altura e seu sexo: ");
  scanf("%f %c", & altura, & sexo);

  peso = peso_ideal(altura, sexo);

  printf("Seu peso ideal é: %.2f\n", peso);
}

float peso_ideal(float altura, char sexo){
  float peso_ideal;

  if(sexo == 'M' || sexo == 'm') peso_ideal = (72.7 * altura) - 58;
  else if(sexo == 'F' || sexo == 'f') peso_ideal = (62.1 * altura) - 44.70;

  return peso_ideal;
}
