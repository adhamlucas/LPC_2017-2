#include <stdio.h>
#include <string.h>

struct godofor{
  char nome[101];
  int nivel;
  int killer;
  int mortes;
};
typedef struct godofor Godofor;

int condKiller(Godofor * heroi, int posi){
  return (heroi[posi].nivel ==  heroi[posi+1].nivel && heroi[posi].killer < heroi[posi+1].killer);
}

int condKiller2(Godofor * heroi, int posi){
  return (heroi[posi].nivel == heroi[posi+1].nivel && heroi[posi].killer == heroi[posi+1].killer); //<
}

int condMortes(Godofor *heroi, int posi){
  return (condKiller2(heroi,posi) && heroi[posi].mortes > heroi[posi+1].mortes);
}

int condMortes2(Godofor *heroi, int posi){
  return (condKiller2(heroi,posi) && heroi[posi].mortes == heroi[posi+1].mortes); //>
}

int condNome(Godofor * heroi, int posi){
  return (condMortes2(heroi, posi) && strlen(heroi[posi].nome) > strlen(heroi[posi+1].nome));
}

void bolhaNivel(Godofor *heroi, int vezes){
  int j;
  int troca = 0;
  for(j = 0; j < vezes-1; j++){
    if(heroi[j].nivel < heroi[j+1].nivel){
      Godofor aux = heroi[j];
      heroi[j] = heroi[j + 1];
      heroi[j + 1] = aux;
      troca = 1;
    }
  }

  if(troca)
    bolhaNivel(heroi, vezes-1);
}

void bolhaAssasino(Godofor *heroi, int vezes){
  int j;
  int troca = 0;
  for(j = 0; j < vezes-1; j++){
    if(condKiller(heroi, j)){
      Godofor aux = heroi[j];
      heroi[j] = heroi[j + 1];
      heroi[j + 1] = aux;
      troca = 1;
    }
  }

  if(troca)
    bolhaAssasino(heroi, vezes-1);
}

void bolhaMorte(Godofor *heroi, int vezes){
  int j;
  int troca = 0;
  for(j = 0; j < vezes-1; j++){
    if(condMortes(heroi, j)){
      Godofor aux = heroi[j];
      heroi[j] = heroi[j + 1];
      heroi[j + 1] = aux;
      troca = 1;
    }
  }

  if(troca)
    bolhaMorte(heroi, vezes-1);
}

void bolhaNome(Godofor *heroi, int vezes){
  int j;
  int troca = 0;
  for(j = 0; j < vezes-1; j++){
    if(strcmp(heroi[j].nome, heroi[j+1].nome) > 0 && condMortes2(heroi,j)){
      Godofor aux = heroi[j];
      heroi[j] = heroi[j + 1];
      heroi[j + 1] = aux;
      troca = 1;
    }
  }

  if(troca)
    bolhaNome(heroi, vezes-1);
}

int main(){
  int vezes, i;

  scanf("%i", &vezes);

  Godofor herois[vezes];

  for(i = 0; i < vezes; i++){
    scanf(" %s %i %i %i", herois[i].nome, &herois[i].nivel, &herois[i].killer, &herois[i].mortes);
  }

  bolhaNivel(herois, vezes);

  if(herois[0].nivel == herois[1].nivel){
    // printf("killer\n" );
    bolhaAssasino(herois, vezes);
  }

  if(herois[0].nivel == herois[1].nivel && herois[0].killer == herois[1].killer){
    // printf("morte\n" );
    bolhaMorte(herois, vezes);
  }

  if(herois[0].nivel == herois[1].nivel && herois[0].killer == herois[1].killer && herois[0].mortes == herois[1].mortes){
    // printf("nome\n" );
    bolhaNome(herois, vezes);
  }

  printf("%s\n", herois[0].nome);

  return 0;
}
