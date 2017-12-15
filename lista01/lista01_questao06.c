#include <stdio.h>

int age_days(int anos, int meses, int dias);

int main(){
  int anos, meses, dias;

  printf("Digite os anos, meses e dias de vida da pessoa: ");
  scanf("%i %i %i", &anos, &meses, &dias);

  dias = age_days(anos, meses, dias);

  printf("Sua idade em dias é: %i\n", dias);
}

int age_days(int anos, int meses, int dias){
  int age_day;
  age_day = dias;
  age_day += (anos * 365);
  age_day += (meses * 30);

  return age_day;
}
