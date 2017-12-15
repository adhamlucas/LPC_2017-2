#include <stdio.h>
#include <string.h>

struct rena{
  char nome[101];
  int peso;
  int idade;
  float altura;
};
typedef struct rena Rena;


void lerDados(Rena * renas, int qtdRenas);
void ordenaRenas(Rena * renas, int qtdRenas);
int compara(Rena * rena1, Rena * rena2);
void imprimirRenasTreno(Rena * renas, int qtdRenaTreno);

int main(){
  int casos, qtdRenas, renasTreno, i;
  scanf("%i", &casos);
  for(i = 0; i < casos; i++){
    scanf("%i %i", &qtdRenas, &renasTreno);
    Rena renas[qtdRenas];
    lerDados(renas, qtdRenas);
    ordenaRenas(renas, qtdRenas);
    printf("CENARIO {%i}\n", (i+1));
    imprimirRenasTreno(renas, renasTreno);
  }

  return 0;
}

void lerDados(Rena * renas, int qtdRenas){
  int i;

  for(i = 0; i < qtdRenas;i++){
    scanf("%s %i %i %f", renas[i].nome, &renas[i].peso, &renas[i].idade, &renas[i].altura);
  }
}

void ordenaRenas(Rena * renas, int qtdRenas){
  int j;
  int troca = 0;
  for(j = 0; j < (qtdRenas - 1); j++){
    if(compara(&renas[j], &renas[j + 1])){
      Rena aux = renas[j];
      renas[j] = renas[j + 1];
      renas[j + 1] = aux;
      troca = 1;
    }
  }

  if(troca)
    ordenaRenas(renas, (qtdRenas - 1));
}

int compara(Rena * rena1, Rena * rena2){
  if(rena1->peso != rena2->peso)
    return(rena1->peso < rena2->peso);
  if(rena1->idade != rena2->idade)
    return(rena1->idade > rena2->idade);
  if(rena1->altura != rena2->altura)
    return(rena1->altura > rena2->altura);

  return(strcmp(rena1->nome, rena2->nome) > 0);
}

void imprimirRenasTreno(Rena * renas, int qtdRenaTreno){
  int i;
  for(i = 0; i < qtdRenaTreno; i++){
    printf("%i - %s\n", (i+1), renas[i].nome);
  }
}
