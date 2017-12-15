#include <stdio.h>
#include <stdlib.h>

int main(){
  char *nome;
  unsigned long long tam;

  printf("Digite o tamanho da string: ");
  scanf("%lli", &tam);
  // nome =(char *) malloc(tam*sizeof(char));
  if(!(nome = (char *) malloc(tam*sizeof(char)))){
    printf("Sem memória\n");
    exit(1);
  }

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("%s\n", nome);

  return 0;
}
