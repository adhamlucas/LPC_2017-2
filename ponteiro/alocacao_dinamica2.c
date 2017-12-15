#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
  char *s;
  register int t;

  s = malloc(80);

  if(!s){
    printf("Falha na solicitação de memória\n");
    exit(1);
  }
  printf("Digite uma palavra: ");
  gets(s);

  for(t = strlen(s)-1; t>= 0; t--)
    putchar(s[t]);
  putchar('\n');
  free(s);
}
