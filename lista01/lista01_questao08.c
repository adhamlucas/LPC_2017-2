#include <stdio.h>

char check_category(int age);

int main(){
  int idade;
  char categoria[15];

  printf("Digite sua idade: ");
  scanf("%i", &idade);

  check_category(idade);
}

char check_category(int age){

  if(age >= 18) printf("adulto\n" );
  else if(age >= 5 && age <= 7) printf("Infantil A\n" );
  else if(age >= 8 && age <= 10) printf("Infantil B\n");
  else if(age >= 11 && age <= 13) printf("Juvenil A\n");
  else if(age >= 14 && age <= 17) printf("Juvenil B\n");

}
