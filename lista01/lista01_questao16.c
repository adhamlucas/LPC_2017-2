#include <stdio.h>

int potencia(int x, int z);

int main(){
  int x, z;

  printf("Digite o valor de x e z:" );
  scanf("%i %i", &x, &z);

  potencia(x, z);
}

int potencia(int x, int z){
  int i, potencia = 1;

  for(i = 1; i <= z; ++i){
     potencia *= x;
  }
  printf("Potencia %i\n", potencia);
}
