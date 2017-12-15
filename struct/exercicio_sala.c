#include <stdio.h>
#include <stdlib.h>

struct professor{
  char nome[50];
  float salario;
};
typedef struct professor Professor;

struct escolas{
  char nome[50];
  int categoria;
  char cidade[30];
  char ensino[30];
  float enem;
  Professor professor[2]; // 20
};
typedef struct escolas Escolas;

void lerDados(Escolas* info);
void imprimirDados(Escolas* info);
void quesitoD(Escolas* info);


int main(){
  Escolas escola[2];
  int posiMaior, posiMenor, maior, menor;

  lerDados(escola);
  imprimirDados(escola);

  maior = escola[0].enem;
  menor = escola[0].enem;

  for(int i = 1; i < 10; i++){
    if(maior < escola[i].enem){
      maior = escola[i].enem;
      posiMaior = i;
    }
    if(menor > escola[i].enem){
      menor = escola[i].enem;
      posiMenor = i;
    }
  }

  printf("Escola com melhor desempenho no Enem: %s\n", escola[posiMaior].nome);
  printf("Escola com menor desempenho no Enem: %s\n", escola[posiMenor].nome);
  quesitoD(escola);

  // for(int i = 0; i < 10; i++){
  //   free(escola[i].professor->nome);
  // }
  // free(escola);

  return 0;
}


void lerDados(Escolas *info){
  for(int i = 0; i < 2; i++){ // 10
    printf("Escola%i\n", (i+1));
    printf("Nome: ");
    scanf(" %[^\n]", info[i].nome);
    printf("Categoria: ");
    scanf("%i", &info[i].categoria);
    printf("Nível de ensino: ");
    scanf(" %[^\n]", info[i].ensino);
    printf("Cidade: ");
    scanf(" %[^\n]", info[i].cidade);
    printf("Nota Enem: ");
    scanf("%f", &info[i].enem);

    for(int j = 0; j < 2; j++){ //20
      printf("Professor%i\n", (j+1));
      printf("Nome: ");
      scanf(" %[^\n]", info[i].professor[j].nome);
      printf("Salário: ");
      scanf("%f", &info[i].professor[j].salario);
    }
  }
}

void imprimirDados(Escolas *info){
  for(int i = 0; i < 2; i++){ //10
    printf("Escola %i\n", (i + 1));
    printf("Nome: %s\n", info[i].nome);
    printf("Categoria: %i\n", info[i].categoria);
    printf("Nível de Ensino: %s\n", info[i].ensino);
    printf("Cidade: %s\n", info[i].cidade);
    printf("ENEM: %.2f\n", info[i].enem);

    for(int j = 0; j < 2; j++){ //20
      printf("Professor %i\n", (i + 1));
      printf("Nome: %s\n", info[i].professor[j].nome);
      printf("Salário: %.2f\n", info[i].professor[j].nome);
    }
  }
}

void quesitoD(Escolas *info){
  float maior = info[0].professor[0].salario;
  int posiEscola = 0, posiProf = 0;

  for(int i = 0; i < 2; i++){ // 10
    for(int j = 0; j < 2; j++){ // 20
      if(maior < info[i].professor[j].salario){
        posiEscola = i;
        posiProf = j;
        maior = info[i].professor[j].salario;
      }
    }
  }

  printf("Professor com amior Salário: %s\n", info[posiEscola].professor[posiProf].salario);
  printf("Escola que leciona: %s\n", info[posiEscola].nome);
}
