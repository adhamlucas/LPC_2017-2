#include <stdio.h>

double aproximar_raiz10(int n);

int main(){
   int n;

   scanf("%i", &n);
   printf("%.10f\n", aproximar_raiz10(n));

   return 0;
}

double aproximar_raiz10(int n){
  if(n == 0)
    return 3;
  else
     return (3 + (1 / (3 + aproximar_raiz10(n-1))));
}
