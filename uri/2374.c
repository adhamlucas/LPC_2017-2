#include <stdio.h>

int main(){
  int pressao_desejada, pressao_lida, resultado;
  scanf("%i", &pressao_desejada);
  scanf("%i", &pressao_lida);

  resultado = pressao_desejada - pressao_lida;

  printf("%i\n", resultado );
}
