/*
  26)
    O resultado de n será 400 e o de pn será o endereço de n;
*/
#include <stdio.h>

int main(){
  int n = 100;
  int *pn;

  printf("\n n = %d", n);

  pn = &n;
  *pn = 200;

  printf("\n n = %d", n);

  n = 2 * (*pn);

  printf("\n *pn = %d", *pn);
  printf("\n n = %d", n);
}
