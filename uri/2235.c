#include <stdio.h>

int main(){
  int a, b , c, count = 0;

  scanf("%i %i %i", &a, &b, &c);

  if(!(a - b)) count += 1;
  else if(!(a - c)) count += 1;
  else if(!(b - c)) count += 1;
  else if(!(b - a)) count += 1;
  else if(!(c - a)) count += 1;
  else if(!(c - b)) count += 1;
  else if(!(a - b + c)) count += 1;
  else if(!(a - b - c)) count += 1;
  else if(!(a + b - c)) count += 1;
  else if(!(-a - b + c)) count += 1;
  else if(!(-a + b + c)) count += 1;
  else if(!(-a + b - c)) count += 1;

  if(count) printf("S\n");
  else printf("N\n");
}
