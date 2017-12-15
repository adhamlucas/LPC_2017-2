#include <stdio.h>
#include <stdlib.h>

struct espectadores{
  int opniao;
  int idade;
};
typedef struct espectadores Espectadores;

void lerDados(Espectadores * espectadores, int qtdEspectadores);
void mediaRegular(Espectadores * espectadores, int qtdEspectadores);
void qtdPessoasBom(Espectadores * espectadores, int qtdEspectadores);
void porcentagemExcelente(Espectadores * espectadores, int qtdEspectadores);


int main(){
  Espectadores espectadores[6];

  lerDados(espectadores, 6);
  system("clear");
  mediaRegular(espectadores, 6);
  qtdPessoasBom(espectadores, 6);
  porcentagemExcelente(espectadores, 6);

  return 0;
}

void lerDados(Espectadores *espectadores, int qtdEspectadores){
  for(int i = 0; i < qtdEspectadores; i++){
    printf("\n%iº espectadorr\n", (i + 1));
    printf("Opnião: ");
    scanf("%i", &espectadores[i].opniao);
    printf("Idade: ");
    scanf("%i", &espectadores[i].idade);
  }
}



void mediaRegular(Espectadores * espectadores, int qtdEspectadores){
  int  count = 0, idades = 0;
  float mediaIdadeRegular;

  for(int i = 0; i < qtdEspectadores; i++){
    if(espectadores[i].opniao == 3){
      idades += espectadores[i].idade;
      count++;
    }
  }

  mediaIdadeRegular = (float)idades / count;

  printf("Idade média de espectadores que opnaram regular: %.2f\n", mediaIdadeRegular);
}

void qtdPessoasBom(Espectadores * espectadores, int qtdEspectadores){
  int qtdPessoas = 0;

  for(int i = 0; i < qtdEspectadores; i++){
    if(espectadores[i].opniao == 2)
      qtdPessoas++;
  }

  printf("Quantidade de pessoas que opinaram bom: %i\n", qtdPessoas);

}

void porcentagemExcelente(Espectadores * espectadores, int qtdEspectadores){
  int qtdPessoasExcelente = 0;
  float porcentagem;

  for(int i = 0; i < qtdEspectadores; i++){
    if(espectadores[i].opniao == 1)
      qtdPessoasExcelente++;
  }

  porcentagem = (qtdPessoasExcelente * 100.0) / qtdEspectadores;

  printf("Porcentagem de pessoas que opniram execelente: %.2f\n", porcentagem);

}
