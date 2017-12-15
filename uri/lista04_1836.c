#include <stdio.h>
#include <math.h>

struct pokemon{
  char nome[50];
  int level;
  int hp;
  int at;
  int df;
  int sp;
};
typedef struct pokemon Pokemon;

void inputPokemon(Pokemon * pokemons, int casos);
void hpPokemon(Pokemon * pokemon);
void atPokemon(Pokemon * pokemon);
void dfPokemon(Pokemon * pokemon);
void spPokemon(Pokemon * pokemon);
void printInfo(Pokemon * pokemons, int casos);

int main(){
  int casos;

  scanf("%i", &casos);

  Pokemon pokemons[casos];

  inputPokemon(pokemons, casos);
  printInfo(pokemons, casos);

  return 0;
}


void inputPokemon(Pokemon * pokemons, int casos){
  int i;
  for(i = 0; i < casos; i++){
    scanf("%s %i", pokemons[i].nome, &pokemons[i].level);
    hpPokemon(&pokemons[i]);
    atPokemon(&pokemons[i]);
    dfPokemon(&pokemons[i]);
    spPokemon(&pokemons[i]);
  }
}

void hpPokemon(Pokemon * pokemon){
  int bs, iv, ev;
  int hp;

  scanf("%i %i %i", &bs, &iv, &ev);

  hp = ((iv + bs + sqrt(ev) / 8) + 50) * pokemon->level;
  hp = (hp / 50) + 10;
  pokemon->hp = hp;
}

void atPokemon(Pokemon * pokemon){
  int bs, iv, ev;
  int at;

  scanf("%i %i %i", &bs, &iv, &ev);

  at = ((iv + bs +  sqrt(ev) / 8)  * pokemon->level);
  at = (at / 50) + 5;

  pokemon->at = at;
}

void dfPokemon(Pokemon * pokemon){
  int bs, iv, ev;
  int df;

  scanf("%i %i %i", &bs, &iv, &ev);

  df = ((iv + bs +  sqrt(ev) / 8)  * pokemon->level);
  df = (df / 50) + 5;

  pokemon->df = df;
}

void spPokemon(Pokemon * pokemon){
  int bs, iv, ev;
  int sp;

  scanf("%i %i %i", &bs, &iv, &ev);

  sp = ((iv + bs +  sqrt(ev) / 8)  * pokemon->level);
  sp = (sp / 50) + 5;

  pokemon->sp = sp;
}

void printInfo(Pokemon * pokemons,int casos){
  int i;
  for(i = 0; i < casos; i++){
    printf("Caso #%i: %s nivel %i\n", (i+1), pokemons[i].nome, pokemons[i].level);
    printf("HP: %i\n", pokemons[i].hp);
    printf("AT: %i\n", pokemons[i].at);
    printf("DF: %i\n", pokemons[i].df);
    printf("SP: %i\n", pokemons[i].sp);
  }
}
