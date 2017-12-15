#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char *p = "Mensagem inicial";
  int t;
  printf (p);
  printf("\n");


  for(t = strlen(p) - 1; t > -1; t--){
    printf("%c", p[t]);
  }

  return 0;
}
/*
  28)
    Saíra na tela:
      Mensagem inicial
      laicini megasneM
*/
