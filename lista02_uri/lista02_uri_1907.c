#include <stdio.h>

char matriz[1024][1024];
int matrizBol[1024][1024];
int N, M;

void transform_boollean();
void print_area(int i, int j);
void print_matriz();

int main(){
  int n, m, i, j, count = 0;

  scanf("%i %i", &n, &m);
  N = n;
  M = m;

  for(i = 0; i < n; ++i){
    scanf("%s", matriz[i]);
  }

  transform_boollean();

  for(i = 0; i < n; ++i){
    for(j = 0; j < m; ++j){
      if(matrizBol[i][j] == 0){
        print_area(i, j);
        count += 1;
      }
    }
  }

  print_matriz();
  printf("%i\n", count);
  return 0;
}


void transform_boollean(){
  int i, j;
  for(i = 0; i < N; ++i){
    for(j = 0; j < M; ++j){
      if(matriz[i][j] == 'o')
        matrizBol[i][j] = 1;
      else
        matrizBol[i][j] = 0;
    }
  }
}

void print_matriz(){
  int i, j;
  for(i = 0; i < N; ++i){
    for(j = 0; j < M; ++j){
      printf("%i", matrizBol[i][j]);
    }
    printf("\n");
  }
}

void print_area(int i, int j){
  if((0 <= i && i < N) && (0 <= j && j < M) && matrizBol[i][j] == 0){
    matrizBol[i][j] = 2;
    print_area((i + 1), j);
    print_area((i - 1), j);
    print_area(i, (j + 1));
    print_area(i, (j - 1));
  }
}
