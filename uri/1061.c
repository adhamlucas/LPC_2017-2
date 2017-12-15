#include <stdio.h>

int main(){
  int lix, dia2, seconds1, seconds2, seconds,d, dia1;
  int minutes1, minutes2, minutes, hours1, hours2, hours;
  int total_seconds , resto;
  char day1[5], p1, p2;
  char day2[5];

  scanf("%s %d",day1, &dia1);
  scanf("%d %s %d %s %d", &hours1, &p1, &minutes1, &p1, &seconds1);
  scanf("%s %d", day2, &dia2);
  scanf("%d %c %d %c %d", &hours2, &p1, &minutes2, &p1, &seconds2);

  total_seconds = (dia1 * 86400 + hours1 * 3600 + minutes1 * 60 + seconds1);
  total_seconds = (dia2 * 86400 + hours2 * 3600 + minutes2 * 60 + seconds2) -
  total_seconds;

  d = total_seconds / 86400;
  resto = total_seconds % 86400;

  hours = resto / 3600;

  resto = resto % 3600;

  minutes = resto / 60;
  resto = resto % 60;
  
  seconds = resto;

  printf("%d dia(s)\n", d);
  printf("%d hora(s)\n", hours );
  printf("%d minuto(s)\n", minutes);
  printf("%d segundo(s)\n", seconds);

  return 0;
}
