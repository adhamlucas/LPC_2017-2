int main(){
  float x, y;
  int *p;

  x = 100.25;
  p = &x;
  y = *p;
  printf("x = %f e y = %f\n", x, y);

  return 0;
}

/*
  A falha de uso do ponteiro no programa é de que um ponteiro do tipo inteiro
  está recebendo endereço de uma variável do tipo float;
*/
