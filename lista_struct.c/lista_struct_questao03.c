#include <stdio.h>

struct funcionario{
  int departamento;
  char nome[50];
  float salario;
};
typedef struct funcionario Funcionarios;

void lerDados(Funcionarios *funcionarios, int qtdFuncionarios);
void nomeFuncionarioMaiorSalario(Funcionarios *funcionarios, int qtdFuncionarios);
void salarioMedioDepartamento(Funcionarios *funcionarios, int qtdFuncionarios, float *mediaSalario);
void salariosDepartamento(Funcionarios *funcionarios, int qtdFuncionarios, float *salarios, int *counts);
void menorMediaSalarial(float *mediaSalario);
void imprimirNomesSalarios(Funcionarios * funcionarios, int qtdFuncionarios);


int main(){
  Funcionarios funcionariosUea[6];
  float mediaSalario[4];
  

  return 0;
}


void leraDados(Funcionarios * funcionarios, int qtdFuncionarios){
  for(int i = 0; i < qtdFuncionarios; i++){
    printf("%iº funcionário\n", (i + 1));
    printf("Departamento: ");
    scanf("%i", &funcionarios[i].departamento);
    printf("Nome: ");
    scanf("%[^\n]", funcionarios[i].nome);
    printf("Salário: ");
    scanf("%f", funcionarios[i].salario);
  }

}

void nomeFunciomarioMaiorSalario(Funcionarios *funcionarios, int qtdFuncionarios){
  int posiMaior = 0;
  float salario = funcionarios[0].salario;

  for(int i = 0; i < qtdFuncionarios; i++){
    if(salario < funcionarios[i].salario){
      salario = funcionarios[i].salario;
      posiMaior = i;
    }
  }

  printf("\nFuncionário com maior Salário\n");
  printf("Nome: %s\n", funcionarios[posiMaior].nome);
  printf("Salário: %.2f\n", funcionarios[posiMaior].salario);

}

void salarioMedioDepartamento(Funcionarios *funcionarios, int qtdFuncionarios, float *mediaSalario){
  float mediaSecretaria, mediaTesouraria, mediaBiblioteca, mediaCpd, salarios[4];
  int counts[4];

  for(int i = 0; i < 4; i++){
    mediaSalario[i] = 0;
    counts[i] = 0;
    salarios[i] = 0;
  }

  salariosDepartamento(funcionarios, 6, salarios, counts);

  for(int i = 0; i < 4; i++)
    mediaSalario[i] = salarios[i] / counts[i];

  printf("\nSalário médio secretaria: %.2f\n", mediaSalario[0]);
  printf("Salário médio Tesouraria: %.2f\n", mediaSalario[1]);
  printf("Salário médio Biblioteca: %.2f\n", mediaSalario[2]);
  printf("Salário médio CPD: %.2f\n", mediaSalario[3]);
}

void salariosDepartamento(Funcionarios *funcionarios, int qtdFuncionarios, float *salarios, int *counts){

  for(int i = 0 ; i < qtdFuncionarios; i++){
    switch (funcionarios[i].departamento) {
      case 1:
        counts[0]++;
        salarios[0] += funcionarios[i].salario;
        break;
      case 2:
        counts[1]++;
        salarios[1] += funcionarios[i].salario;
        break;
      case 3:
        counts[2]++;
        salarios[2] += funcionarios[i].salario;
        break;
      case 4:
        counts[3]++;
        salarios[3] += funcionarios[i].salario;
        break;
      default:
        break;
    }
  }

}

void menorMediaSalarial(float *mediaSalarios){
  float menor = mediaSalarios[0];
  int posicao = 0;

  for(int i = 1; i < 4; i++){
    if(menor > mediaSalarios[i]){
      menor = mediaSalarios[i];
      posicao = i;
    }
  }

  switch (posicao) {
    case 0:
      printf("\nDepartamento com menor média salarial\n");
      printf("Secretaria\n");
      printf("Média salarial = %.2f\n", menor);
    case 1:
      printf("\nDepartamento com menor média salarial\n");
      printf("Tesouraria\n");
      printf("Média salarial = %.2f\n", menor);
    case 2:
      printf("\nDepartamento com menor média salarial\n");
      printf("Biblioteca\n");
      printf("Média salarial = %.2f\n", menor);
    case 3:
      printf("\nDepartamento com menor média salarial\n");
      printf("CPD\n");
      printf("Média salarial = %.2f\n", menor);
  }
}

void imprimirNomesSalarios(Funcionarios *funcionarios, int qtdFuncionarios){
  for(int i = 0; i < qtdFuncionarios; i++){
    printf("\nNome: %s\n", funcionarios[i].nome);
    printf("Salário: %.2f\n", funcionarios[i].salario);
  }
}
