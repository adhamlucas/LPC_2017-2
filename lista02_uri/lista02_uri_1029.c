#include <stdio.h>

// int calls = 0;

int fibonacci(int n, int *calls); // declaração de ponteiro para inteiro

int main(){
  int n, i, number, fib, calls = 0;

  scanf("%i", &n);

  for(i = 0; i < n; ++i){
    scanf("%i", &number);
    fib = fibonacci(number, &calls); //&calls passa o endereço da variável calls
    printf("fib(%i) = %i calls = %i\n", number, (calls - 1), fib);
    calls = 0;
  }
}

int fibonacci(int n, int *calls){ // int* calls o ponteiro que recebera o endereço
  if (n == 1 || n ==0){
    *calls += 1; //Altera o contéudo que está no endereço passado como argumento para call
    return n;
  }
  else{
    *calls += 1;
    return (fibonacci(n-1, calls) + fibonacci(n-2, calls));
                      // Não é necessário colocar * ou & porque calls já tem armazenado o endereço que será recebido
  }

}
