#include <stdio.h>
#include <stdlib.h>
#define tam 10

void push(int i); //coloca valores na pilha
int pop();
int *topo, *p1, pilha[tam];

int main(){
  int valor;
  topo = pilha;
  p1 = pilha; //inicializa p1

  do{
    printf("\nDigite o valor:");
    printf("\n(0) para remover elemento da piilha\n (-1) para encerrar\nqualquer outro valor para inserir \n\n");

    scanf("%d", &valor);

    if(valor != 0)
      push(valor);
    else
      printf("\nValor do topo é %i \n\n\n", pop());

  }while(valor != -1);

  return 0;
}

void push(int i){
  p1++;
  if(p1 == (topo + tam)){
    printf("Pilha cheia. Impossível inserir elemento \n");
    exit(1);
  }

  *p1 = i;
}

int pop(){
  if(p1 == topo){
    printf("Pilha vazia\n");
    // return *(p1 + 1);
  } else{
    printf("Elemento será removido\n");
    p1--;
  }
  return  *(p1 + 1);
}
