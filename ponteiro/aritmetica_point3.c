#include <stdio.h>

void mensagemErro(int num){
  char *err[] = {
    "Arquivo não pode ser aberto\n",
    "Erro deleitura\n",
    "Erro de escrita\n",
    "Falha da mídia\n"
  };
  printf("%s", err[num]);
}

int main(){
  int erro;
  printf("Digite o número do erro de 0 a 3\n");
  scanf("%i", &erro);
  mensagemErro(erro);

  return 0;
}
