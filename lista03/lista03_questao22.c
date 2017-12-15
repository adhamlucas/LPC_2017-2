#include <stdio.h>

int main(){
  char frase[100];
  char *word;
  int count = 0;

  gets(frase);
  word = frase;

  while(frase[count] != '\0')
    count += 1;

  for(int i = count; i > -1; i--)
    printf("%c", *(word + i));
  printf("\n");

  return 0;
}
