#include <stdio.h>

int main(){
  int x = 10;
  int *p1, *p2;
  int s[10];

  p1 = &x;
  p2 = p1;
  for(int i = 0; i < 10; i++){
    printf("%p\n", (s+i));
  }


  printf("valor %i\n endereço de x %p counteúdo de p1 %p\n", *p1, &x, p1);
  printf("%i %p %p\n", *p1, p1, &p1);
  printf("%i %p %p\n", *p2, p2, &p2);

  return 0;
}
