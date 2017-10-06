#include <stdio.h>

int mdc(int f1, int f2);

int main(){
  int N, f1, f2, count, result, maior, menor;

  scanf("%i", &N);

  count = 0;

  for(count = 0; count < N; ++count){
    scanf("%i %i", &f1, &f2);
    maior = f1;
    if(f1 < f2)
      maior = f2;

    menor = f1;
    if (f1 > f2)
      menor = f2;

    printf("%i\n", mdc(maior, menor));
  }
  return 0;
}

int mdc(int f1, int f2){
  if(f1 % f2 == 0)
    return f2;
  else
    return (mdc(f2, (f1%f2)));
}
