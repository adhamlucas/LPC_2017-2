#include  <stdio.h>

int who_Survived(int n, int k);

int main(){
  int NC, n, k, i;

  scanf("%i", &NC);

  for(i = 1; i <= NC; ++i){
    scanf("%i %i", &n, &k);
    printf("Case %i: %i\n", i, who_Survived(n, k));
  }

  return 0;
}

int who_Survived(int n, int k){
  if(n == 1)
    return 1;
  else
    return((k - 1 + who_Survived(n - 1, k))% n + 1);
}
