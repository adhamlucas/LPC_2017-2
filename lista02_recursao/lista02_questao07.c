#include <stdio.h>
#include <string.h>

#define stringtam 21

int tamanho_string(char string[]);
int number_repetion(char string[], char charactere, int tamanho);

int main(){
  char string[stringtam];
  char charac;
  int len, ocurrency;

  printf("Digite uma string com até 20 characthers: \n");
  scanf("%s", string);
  printf("Digite o caracter a ser buscado: \n");
  scanf(" %c", &charac);

  len = tamanho_string(string);
  ocurrency = number_repetion(string, charac, (len - 1));

  printf("%i\n", len);
  printf("O caractere aparece %i na string\n", ocurrency);

  return 0;
}


int tamanho_string(char string[]){
  int i, count = 0;
  for(i = 0; i < stringtam; ++i){
    if(string[i] != '\0')
        count += 1;
    else
      return count;
  }
}

int number_repetion(char string[], char charactere, int tamanho){

  if(tamanho < 0)
    return 0;
  if(string[tamanho] == charactere)
    return 1 + (number_repetion(string, charactere, (tamanho - 1)));
  else
    return (number_repetion(string, charactere, (tamanho - 1)));

}
