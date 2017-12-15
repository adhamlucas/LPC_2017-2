#include <stdio.h>

struct pokemon{
  int ai;
  int di;
  int li;
  int golpe;
};
typedef struct pokemon Pokemon;

void inputInfo(Pokemon * pokemon, int bonus);
void valorGolpe(Pokemon * pokemon, int bonus);
void batalha(Pokemon * dabriel, Pokemon * guarte);

int main(){
  Pokemon dabriel, guarte;
  int bonus, times, golpeDabirle, golpeGuarte, i;

  scanf("%i", &times);

  for(i = 0; i < times; i++){
    scanf("%i", &bonus);
    inputInfo(&dabriel, bonus);
    inputInfo(&guarte, bonus);
    batalha(&dabriel, &guarte);
  }

  return 0;
}

void inputInfo(Pokemon * pokemon, int bonus){
  scanf("%i %i %i", &pokemon->ai, &pokemon->di, &pokemon->li);
  if(pokemon->li % 2 == 0)
    valorGolpe(pokemon, bonus);
  else
    valorGolpe(pokemon, 0);
}

void valorGolpe(Pokemon *pokemon, int bonus){
  pokemon->golpe = ((pokemon->ai + pokemon->di) / 2) + bonus;
}

void batalha(Pokemon * dabriel, Pokemon * guarte){
  if(dabriel->golpe > guarte->golpe)
    printf("Dabriel\n");
  else if(dabriel->golpe < guarte->golpe)
    printf("Guarte\n");
  else
    printf("Empate\n");
}
