#include <stdio.h>

float calculate_media(float note1, float note2, float note3, char word);

int main(){
  float nota1, nota2, nota3, media;
  char word;


  printf("Digite as três notas do aluno e o comando para média:\n");
  printf("A -- média aritmética\nP -- média ponderada\nH -- média harmônia\n");
  scanf("%f %f %f %c", &nota1, &nota2, &nota3, &word);

  media = calculate_media(nota1, nota2, nota3, word);

  printf("A media é: %.2f\n", media);
}

float calculate_media(float note1, float note2, float note3, char word){
  float media_aritmetica, media_ponderada, media_harmonica;

  if(word == 'A' || word == 'a'){
    media_aritmetica = (note1 + note2 + note3) / 3;
    return media_aritmetica;
  }
  else if(word == 'P' || word == 'p'){
    media_ponderada = (note1 * 5 + note2 * 3 + note3 * 2) / 10.0;
    return media_ponderada;
  }
  else if(word == 'H' || word == 'h'){
    media_harmonica = 3 / ((1.0 / note1) + (1.0 / note2) + (1.0 / note3));
    return media_harmonica;
  }
}
