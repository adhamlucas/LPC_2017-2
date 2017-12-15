/* O programa armazena os valores na matriz
M[3][4] usando a expressão "(t * 4) + i + 1"
Após isso o programa imprime cada elemento da matriz
linha a linha:
  1 2 3 4
  5 6 7 8
  9 10 11 12*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int t, i, M[3][4];

  for(t = 0; t < 3; ++t)
    for(i = 0; i < 4; ++i)
      M[t][i] = (t * 4) + i + 1;

  for(t = 0; t < 3; ++t){
    for(i = 0; i < 4; ++i)
      printf("%3d ", M[t][i]);
    printf("\n");
  }

  return 0;
}
