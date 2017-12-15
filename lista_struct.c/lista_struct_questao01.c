#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct editora{
  char nomeRevista[6];
  float valorRevista;
  int idade;
  char sexo;
};
typedef struct editora EditoraAbril;

void lerDadosAssinantes(EditoraAbril * assinantes, int qtdAssinantes);
void imprimirDadosAssinantes(EditoraAbril * assinantes, int qtdAssinantes);
void menorMaiorqtdAssinantes(EditoraAbril * assinantes, int qtdAssinantes);
void idadeMediaAssinantesVeja(EditoraAbril * assinantes, int qtdAssinantes);
void qtdAssinantesHomensExame(EditoraAbril * assinantes, int qtdAssinantes);
void qtdAssinantesMulheresInfo(EditoraAbril * assinantes, int qtdAssinantes);
void menorValorAssinaturaMulher(EditoraAbril * assinantes, int qtdAssinantes);


int main(){
  EditoraAbril assinantes[6];

  lerDadosAssinantes(assinantes, 6);
  imprimirDadosAssinantes(assinantes, 6);
  menorMaiorqtdAssinantes(assinantes, 6);
  idadeMediaAssinantesVeja(assinantes, 6);
  qtdAssinantesHomensExame(assinantes, 6);
  qtdAssinantesMulheresInfo(assinantes, 6);
  menorValorAssinaturaMulher(assinantes, 6);

  return 0;
}


void lerDadosAssinantes(EditoraAbril * assinantes, int qtdAssinantes){
  for(int i = 0; i < qtdAssinantes; i++){
    printf("Nome da revista assinada: ");
    scanf(" %s", assinantes[i].nomeRevista);
    printf("Valor da revista: ");
    scanf(" %f", &assinantes[i].valorRevista);
    printf("Idade: ");
    scanf(" %i", &assinantes[i].idade);
    printf("Sexo: ");
    scanf(" %c", &assinantes[i].sexo);
  }
}

void imprimirDadosAssinantes(EditoraAbril * assinantes, int qtdAssinantes){
  for(int i = 0; i < qtdAssinantes; i++){
    printf("\nNome Revista: %s\n", assinantes[i].nomeRevista);
    printf("Valor Revista: %.2f\n", assinantes[i].valorRevista);
    printf("Idade assinante: %i\n", assinantes[i].idade);
    printf("Sexo: %c\n", assinantes[i].sexo);
  }
}

void menorMaiorqtdAssinantes(EditoraAbril * assinantes, int qtdAssinantes){
  int exame, veja, info, maior, menor;
  exame = veja = info = 0;

  for(int i = 0; i < qtdAssinantes; i++){
    if((strcmp("VEJA", assinantes[i].nomeRevista)) == 0)
      veja++;
    else if((strcmp("INFO", assinantes[i].nomeRevista)) == 0)
      info++;
    else if((strcmp("EXAME", assinantes[i].nomeRevista)) == 0)
      exame++;
  }

  maior = veja;
  menor = exame;

  if(maior < info)
    maior = info;
  if(maior < exame)
    maior = exame;

  if(menor > veja)
    menor = veja;
  if (menor > info)
    menor = info;

  printf("\n");

  if(maior == veja)
    printf("Revista com maior quantidade assinantes: VEJA com %i assinantes\n", maior);
  else if(maior == info)
    printf("Revista com maior quantidade assinantes: INFO com %i assinantes\n", maior);
  else if(maior == exame)
    printf("Revista com maior quantidade assinantes: EXAME com %i assinantes\n", maior);

  if(menor == veja)
    printf("Revista com menor quantidade assinantes: VEJA com %i assinantes\n", menor);
  else if(menor == info)
    printf("Revista com menor quantidade assinantes: INFO com %i assinantes\n", menor);
  else if(menor == exame)
    printf("Revista com menor quantidade assinantes: EXAME com %i assinantes\n", menor);

}

void idadeMediaAssinantesVeja(EditoraAbril * assinantes, int qtdAssinantes){
  int qtdAssinantesVeja = 0, idades = 0;
  float media;

  for(int i = 0; i < qtdAssinantes; i++){
    if(strcmp("VEJA", assinantes[i].nomeRevista) == 0){
      qtdAssinantesVeja++;
      idades += assinantes[i].idade;
    }
  }

  media = (float) idades / qtdAssinantesVeja;

  printf("Media da idades dos assinantes VEJA: %.1f\n", media);
}

void qtdAssinantesHomensExame(EditoraAbril * assinantes, int qtdAssinantes){
  int qtdAssinantesExame = 0;
  char sexo = 'M';

  for(int i = 0; i < qtdAssinantes; i++){
    if(strcmp("EXAME", assinantes[i].nomeRevista) == 0){
      if(sexo == assinantes[i].sexo)
      qtdAssinantesExame++;
    }
  }
  printf("Assinantes homens da revista EXAME: %i\n", qtdAssinantesExame);
}

void qtdAssinantesMulheresInfo(EditoraAbril * assinantes, int qtdAssinantes){
  int qtdAssinantesInfo = 0;
  char sexo = 'F';

  for(int i = 0; i < qtdAssinantes; i++){
    if(strcmp("INFO", assinantes[i].nomeRevista) == 0){
      if(sexo == assinantes[i].sexo)
      qtdAssinantesInfo++;
    }
  }
  printf("Assinantes mulheres da revista INFO: %i\n", qtdAssinantesInfo);
}

void menorValorAssinaturaMulher(EditoraAbril * assinantes, int qtdAssinantes){
  float menorValor = 0;

  for(int i = 0 ; i < qtdAssinantes; i++){
    if('F' == assinantes[i].sexo){
      menorValor = assinantes[i].valorRevista;
      i = qtdAssinantes;
    }
  }

  for(int i = 0; i < qtdAssinantes; i++){
    if('F' == assinantes[i].sexo){
      if(menorValor > assinantes[i].valorRevista)
        menorValor = assinantes[i].valorRevista;
    }
  }
  if(menorValor)
    printf("Menor valor de assinatura pago pelas mulheres: %.2f\n", menorValor);
  else
    printf("Mulheres não assinaram!\n");
}
