// O resultado impresso será 4
#include <stdio.h>

int main(){
  int y, *p, x;
  y = 0; // A variável y recebe o valor 0, y = 0
  p = &y; // A variável p recebe o endereço de y, p = &y
  x = *p; // A variável x recebe o conteúdo da variável apontado por p, x = 0
  x = 4; // A variável x recebe o valor 4, x = 4
  (*p)++; // A variável apontada por p é acrescida de 1 unidade, y = 1
  x--; // X decrescê uma unidade, x = 3
  *p += x; // A variável apontada por p é acrescida de x, y = 4
  printf("y = %d\n", y);
}
