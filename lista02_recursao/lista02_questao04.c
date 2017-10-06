#include <stdio.h>

int fibonacci(int n);

int main(){
  int n, fib;

  printf("Digite n de fib: ");
  scanf("%i", &n);

  fib = fibonacci(n);

  printf("%i\n", fib);
}

int fibonacci(int n){
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n - 1) + fibonacci(n - 2));
}
