#include <stdio.h>

char conceito(float nota);

int main(){
  float nota;
  char classif;

  printf("Digite a nota do aluno: ");
  scanf("%f", &nota);

  classif = conceito(nota);

  printf("Conceito do aluno: %c\n", classif );
}

char conceito(float nota){
  char conceito;

  if(nota >= 0 && nota < 5) conceito = 'D';
  else if(nota >= 5.0  && nota< 7) conceito = 'C';
  else if(nota >= 7 && nota < 9) conceito = 'B';
  else if(nota >= 9.0 && nota <= 10) conceito = 'A';

  return conceito;
}
