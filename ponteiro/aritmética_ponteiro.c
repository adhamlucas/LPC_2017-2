#include <stdio.h>
#include <string.h>

void imprimeAritPonteiro(char *nome);
void imprimeIndexMatriz(char *nome);

int main(){
  char nome[20];
  printf("Digite o nome: ");
  scanf("%s", nome);
  printf("\n\n");
  imprimeAritPonteiro(nome);
  printf("\n\n");
  imprimeIndexMatriz(nome);
  return 0;
}

void imprimeIndexMatriz(char *nome){
  int i;
  for(i = 0; nome[i]; ++i){
    putchar(nome[i]);
  }
  putchar('\n');
}

void imprimeAritPonteiro(char *nome){

  while(*nome)
    putchar(*nome++);
  putchar('\n');
}
