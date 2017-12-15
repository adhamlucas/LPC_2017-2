// O valor de Y será igual a 5

#include <stdio.h>
#include <stdlib.h>

int main(){
  int y, *p, x;

  y  = 0; // y receberá 0
  p = &y; // p receberá o endereço de y, p = endereço de y
  x = *p; // x receberá o conteúdo do endereço que p contém, ou seja, o valor de y; x = 0;
  x = 4; // x receberá 4; x = 4;
  (*p)++; // O conteúdo do endereço armazenado em p será acrestendado mais 1; y = 1;
  x;
  (*p) += x;// O conteúdo da variável apontado por p será acrestendado do valor de x; y = 1 + 4, y = 5;
  printf("y = %d\n", y);

  return 0;
}
