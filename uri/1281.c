#include <stdio.h>
#include <string.h>

struct produtos{
  char nome[51];
  float preco;
};
typedef struct produtos Produto;

struct parcinova{
  char nome[51];
  int qtd;
};
typedef struct parcinova Parcinova;

void infoProdutos(Produto *produtos, int qtdProdutos);
void entradaCompras(Parcinova * compras, int qtdProdutosComprados);
void valorGasto(Produto * produtoDisponivel, int qtdProdutosDisponiveis);


int main(){
  int idas, i, qtdProdutos;

  scanf("%i", &idas);

  for(i = 0; i < idas; i++){
    scanf("%i", &qtdProdutos);
    Produto produtoDisponivel[qtdProdutos];
    infoProdutos(produtoDisponivel, qtdProdutos);
    valorGasto(produtoDisponivel, qtdProdutos);
  }

  return 0;
}

void infoProdutos(Produto *produtos, int qtdProdutos){
  int i;
  for(i = 0; i < qtdProdutos; i++){
    scanf("%s %f", produtos[i].nome, &produtos[i].preco);
  }

}

void valorGasto(Produto * produtoDisponivel, int qtdProdutosDisponiveis){
  float gasto = 0;
  int i, j, qtdProdutosComprados;

  scanf("%i", &qtdProdutosComprados);

  Parcinova compra[qtdProdutosComprados];

  entradaCompras(compra, qtdProdutosComprados);

  for(i = 0; i < qtdProdutosComprados; i++){
    for(j = 0; j < qtdProdutosDisponiveis; j++){
      if(strcmp(compra[i].nome, produtoDisponivel[j].nome) == 0){
        gasto += (compra[i].qtd * produtoDisponivel[j].preco);
        break;
      }
    }
  }

  printf("R$ %.2f\n", gasto);

}

void entradaCompras(Parcinova * compras, int qtdProdutosComprados){
  int i;

  for(i = 0; i < qtdProdutosComprados; i++){
    scanf("%s %i", compras[i].nome, &compras[i].qtd);
  }
}
