#include <stdio.h>

#define PI 3.141

float calculate_sphere(float raio);

int main(){
  float raio, volume;

  printf("Digite o raio da esfera: ");
  scanf("%f", &raio);

  volume = calculate_sphere(raio);

  printf("O volume da esfera é: %.2f\n", volume);
}

float calculate_sphere(float raio){
  float volume;

  volume = (4.0 / 3.0) * PI * (raio * raio * raio);
  return volume;
}
