#include <stdio.h>
#include <math.h>

int baskara(int a, int b, int c);

int main(){
  int a, b, c;

  printf("Digite os valores da raiz quadrada: ");
  scanf("%i %i %i", &a, &b, &c);

  baskara(a, b, c);
}


int baskara(int a, int b, int c){
  int delta, raiz1, raiz2;

  if(!a){
    printf("Não há raizes, pois a = 0\n");
    return 0;
  }

  delta = (b * b) - (4 * a * c);

  if(delta < 0){
    printf("Não há raiz de número negativos, delta < 0\n");
    return 0;
  }

  raiz1 = -b + sqrt(delta) / (2 * a);
  raiz2 = -b - sqrt(delta) / (2 * a);

  printf("Raiz1 = %i\n", raiz1);
  printf("Raiz2 = %i\n", raiz2);
}
