#include <stdio.h>

int time_fabrica(int seconds);

int main(){
  int seconds, *times;

  printf("Digite o tempo em segundos: ");
  scanf("%i", &seconds);

  time_fabrica(seconds);
}

int time_fabrica(int seconds){
  int hours, minutes;

  hours = seconds / 3600;
  minutes = (seconds % 3600) / 60;
  seconds = (seconds % 3600) % 60;

  printf("%ih:%im:%is\n", hours, minutes, seconds);
}
